# Desafio: Dada uma lista de números inteiros nums e um número alvo target,
# retorne True se existirem dois números diferentes na lista que somados dão target, ou False caso contrário.
# Exemplo: nums = [2, 7, 11, 15], target = 9 $\rightarrow$ True (porque $2 + 7 = 9$)
                                                          
def has_pair(nums, target):
  seen = set()

  for num in nums:
    need = target - num

    if need in seen:
      return True

    seen.add(num)

  return False

nums = [5, 9, 7, 4, 8, 13, 20]
target = 40
print(has_pair(nums, target))
