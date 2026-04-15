class Solution:
    def isValid(self, s: str) -> bool:
        arr = []
        hashtab = {")" : "(" , "}" : "{" , "]" : "["}

        for c in s:
            if c in hashtab:
                if arr and arr[-1] == hashtab[c]:
                    arr.pop()
                else:
                    return False
            else:
                arr.append(c)
        return not arr
        