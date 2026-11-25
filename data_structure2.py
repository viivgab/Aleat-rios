# Dada uma string text (só com letras minúsculas), retorne a primeira letra que aparece pela segunda vez 
# enquanto você lê da esquerda para a direita. Se nenhuma letra se repetir, retorne None.


def first_repeat(text):
  seen = set()

  for char in text:
    if char in seen:
      return char
    seen.add(char)
    
  return None

text = "astepforward"
print(first_repeat(text))