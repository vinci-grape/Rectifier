def solve(s):
    a = ["a","e","i","o","u"]
    
    for str in a:
        if str.lower() == s.lower():
            return "vowel"
    
    return "consonant"

s = input()
print(solve(s))