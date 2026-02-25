t = int(input())

for _ in range(t):
    
    A ,B ,X ,Y , =  map(int, input().split())
    
    trades = A // X
    remaining_currency1 = A % X
    currency2_total = B + trades * Y
    
    total_money = remaining_currency1 + currency2_total
    
    print(total_money)
    