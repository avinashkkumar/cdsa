armstrong_numbers = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    153, 370, 371, 407, 1634, 
    8208, 9474, 54748, 92727, 93084,
    548834, 1741725, 4210818, 9800817, 9926315,
    24678050, 24678051, 88593477, 146511208, 472335975,
    534494836, 912985153, 4679307774, 32164049650, 32164049651,
    40028394225, 42678290603, 44708635679, 49388550606, 82693916578,
    94204591914, 28116440335967, 4338281769391370, 4338281769391371, 21897142587612075,
    35641594208964132, 35875699062250035, 1517841543307505039, 3289582980819650158, 4498128791164624869
]
for n in armstrong_numbers:
    y = n
    suu = 0
    po = len(str(n))
    for x in range(0,po):
        t = n % 10
        cn = pow(t,po)
        suu = suu + cn
        n = int(n/10)
    if suu == y:
        print(y,"armstrong")
    else:
        print("no")
        print(n,y)
