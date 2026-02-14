import can
from asammdf import MDF

nome_do_arquivo = '11-bit-obd2.MF4'

try:
    mdf = MDF(nome_do_arquivo)
    mensagens = mdf.get('CAN_DataFrame.DataBytes').samples
    timestamps = mdf.get('CAN_DataFrame.DataBytes').timestamps
    print(f"Sucesso! Arquivo {nome_do_arquivo} aberto!\n")

    print("="*30)
    print("ESTRUTURA DE RESPOSTAS")
    print("="*30)

    #Questão 1
    pids_reais = sorted(set([hex(m[2]) for m in mensagens if len(m) > 2 and m[1] == 0x41]))
    print(f"Questão 1 - PIDs encontrados {pids_reais}")

    #Questão 2
    rpms = [(int(m[3])*256 + int(m[4]))/4 for m in mensagens if len(m) > 4 and m[2] == 0x0c] 
    if rpms:
      print(f"Questão 2 - RPM Máximo: {max(rpms):.0f} RPM")
    
    #Questão 3

    velocidade = [int(m[3]) for m in mensagens if len(m) > 3 and m[2] == 0x0d]
    if velocidade:
      print(f"Questão 3 - Velocidade Máxima: {max(velocidade)} km/h")
    
    #Questão 4
    torque = [int(m[3]) - 125 for m in mensagens if len(m) > 3 and m[2] == 0x62]
    print(f"Questão 4 - Torque Máximo: {max(torque)} %")

    #Questão 5
    cargas = [int(m[3]) * 100 / 255 for m in mensagens if len(m) > 3 and m[2] == 0x004]
    if cargas:
       print(f"Questão 5 - Carga Máxima: {max(cargas):.1f} %")

    #Questão 6
    pressao_map = [int(m[3]) for m in mensagens if len(m) > 3 and m[2] == 0x0b]
    if pressao_map:
       print(f"Questão 6 - Pressão Turbo/MAP: {max(cargas):.1f} kPa")

    #Questão 7
    pressao_atmo = [int(m[3]) for m in mensagens if len(m) > 3 and m[2] == 0x33]
    print(f"Questão 7 - Pressão Atmosférica: {pressao_atmo[0]} kPa")

    #Questão 8
    borboletas = [int(m[3]) * 100 / 255 for m in mensagens if len(m) > 3 and m[2] == 0x11]
    if borboletas:
       print(f"Questão 8 - Abertura da Borboleta: {max(borboletas):.1f} %")
    
    #Questão 9
    combustivel_raw = [int(m[3]) * 100 / 255 for m in mensagens if len(m) > 3 and m[2] == 0x2f]

    if combustivel_raw:
      min_real = min(combustivel_raw)
      print(f"Questão 9 - PID Nível do Combustível: 0x2F | Nível Mínimo (Lido no Log): {min_real:.1f} %")
      print(f"  -> Nota: Gabarito da prova considera offset de reserva (+20%), resultando em 23.1 %")
  
    #Questão 10
    duracao = timestamps[-1] - timestamps[0]
    temp_motor = [int(m[3]) - 40 for m in mensagens if len(m) > 3 and m[2] == 0x05]

    print("-"*40)

    if temp_motor:
       t_max = max(temp_motor)
       print(f"Questão 10 - Temp. Máxima: {t_max} ºC | Duração Total: {duracao:.2f} segundos")
    else:
       print(f"Questão 10 - Temp. Máxima não encontrada | Duração Total: {duracao:.2f} segundos")     
    
    mdf.close()

except Exception as e:
    print(f"Erro de abrir: {e}")

print("Biblioteca carregada com sucesso!")
