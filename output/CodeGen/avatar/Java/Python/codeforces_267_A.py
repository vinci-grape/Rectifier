def sub(a, b):
    min = min(a, b)
    max = max(a, b)
    result = 0
    while min > 0:
        result += max // min
        max = max % min
        min = min // max
    return result