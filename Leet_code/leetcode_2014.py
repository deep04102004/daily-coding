from collections import Counter, deque

class Solution:
    def longestSubsequenceRepeatedK(self, s: str, k: int) -> str:
        ans = ""
        candidate = sorted(
            [c for c, w in Counter(s).items() if w >= k], reverse=True
        )
        q = deque(candidate)
        while q:
            curr = q.popleft()
            if len(curr) > len(ans):
                ans = curr
            elif len(curr) == len(ans) and curr > ans:
                ans = curr
            # generate the next candidate string
            for ch in candidate:
                nxt = curr + ch
                it = iter(s)
                if all(ch in it for ch in nxt * k):
                    q.append(nxt)
        return ans

# Main function
def main():
    s = "letsleetcode"
    k = 2
    sol = Solution()
    result = sol.longestSubsequenceRepeatedK(s, k)
    print("Longest subsequence repeated", k, "times:", result)

if __name__ == "__main__":
    main()
