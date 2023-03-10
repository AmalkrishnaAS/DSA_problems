class Solution:
    def __init__(self):
        self.m = {}

    def factorial(self, n):
        if n <= 1:
            return 1
        if n in self.m:
            return self.m[n]
        self.m[n] = n * self.factorial(n - 1)
        return self.m[n]

    def comb(self, n, r):
        nfact = self.factorial(n)
        rfact = self.factorial(r)
        nrfact = self.factorial(n - r)
        return nfact // (rfact * nrfact)

    def generate(self, n):
        ans = []
        for i in range(n):
            tmp = []
            for j in range(i + 1):
                tmp.append(self.comb(i, j))
            ans.append(tmp)
        return ans
