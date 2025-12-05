def function(haystack:str, needle:str):
    n = len(haystack)
    m = len(needle)
    if m == 0:
        return 0
    if m > n:
        return -1
    
    for i in range(n- m +1):
        if haystack[i: m+i] == needle:
            return i

    return -1

if __name__ == "__main__":
    haystack = "sadbutsad"
    needle = "sad"
    result = function(haystack,needle)

    print(result)