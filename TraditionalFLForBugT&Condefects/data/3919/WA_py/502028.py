while True :
    a,b,c = raw_input().split()
    a = int (a)
    b = int (b)
    c = int (c)
    if a > b :
    	t = a
    	a = b
    	b = t
    if a > c :
    	t = a
    	a = c
    	c = t 
    if b > c :
    	t = b
    	b = c
    	c = t
    M = a+b;
    L = c-b;
    N = a*a+b*b;
    if M > c and L < a :
        if M == 2 * c :
        	print "DB"
        elif a == b and M != c :
            print "DY"
        elif N == c * c :  
            print "ZJ"
        elif a != b and N != c*c :
            print "PT"
    else : 
       	print "ERROR"
