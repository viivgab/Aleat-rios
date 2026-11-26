def first_uniq_char(text):
  count = {}

  for letter in text:
    count[letter] = count.get(letter, 0) + 1

  for i, char in enumerate(text):
    if count[char] == 1:
      return i
    
  return -1

print(first_uniq_char("firstleetcode"))

print(first_uniq_char("aabb"))