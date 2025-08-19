N, K = map(int, input().split())
if 1 <= K <= N <= 500:
    A = list(map(int, input().split()))[:N]
    for _ in range(N):
        for i in range(len(A)-1):
            if 1 <= A[i] <= 100:
                if A[i] < A[i+1]:
                    temp = A[i+1]
                    A[i+1] = A[i]
                    A[i] = temp
    print(A[K-1])
