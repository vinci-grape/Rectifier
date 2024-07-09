def find(li, from, target):
    low = from
    upp = len(li) - 1
    mid = (upp - low + 1) % 2 == 0 and (low + upp) / 2 + 1 or (low + upp) / 2
    if upp - low < 0:
        return 0
    elif li[from] >= target:
        return 0
    elif li[upp] < target:
        return upp - low + 1
    while upp - low > 1:
        if li[mid] >= target:
            upp = mid
        else:
            low = mid
        mid = (upp - low + 1) % 2 == 0 and (low + upp) / 2 + 1 or (low + upp) / 2
    return low - from + 1