def judge(n,i):
    if n % 2 ==0:
        m = n / 2
    else:
        m = (3 * n + 1) / 2
    if m == 1:
        return i + 1
    else:
        return judge(m,i + 1)

n = int(input())
while n > 1000:
    print('输入数字过大，请重新输入！')
    n = int(input())
i = 0
print(judge(n,i))

