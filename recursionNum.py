n = int(input("Enter the number : "))
def FactorialNum(n):
    if(n == 1):
        return 1

    return n * FactorialNum(n - 1)
print(FactorialNum(n))