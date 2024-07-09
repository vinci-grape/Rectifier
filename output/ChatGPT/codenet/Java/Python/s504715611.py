import sys
from typing import List, Tuple

def is_palindrome(s: str) -> str:
    return "Yes" if s[2] == s[3] and s[4] == s[5] else "No"

def main() -> None:
    s = input()
    print(is_palindrome(s))

if __name__ == "__main__":
    main()