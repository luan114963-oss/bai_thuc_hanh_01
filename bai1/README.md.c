input: 3 số a, b, c
output: nghiệm của pt, tbao nếu VN, VSN.
VD với các bộ số(a,b,c):
(1,2,1):nhận thấy hệ số a=1 != 0 nên sẽ không gọi hàm giải ptb1 ra, mà lập tức giải ptb2. Nhận thấy delta == 0 nên kết luận pt có nghiệm kép và là -b/2a = -1.
(0,2,0): Nhận thấy hệ số a==0 nên sẽ lập tức đi vào giải hàm ptb1, lại thấy a!=0 mà b==0 lập tức trả kết quả VN.
(0,2,2): Nhận thấy hệ số a == 0 nên sẽ lập tức đi vào giải hàm ptb2, thấy a và b !=0 nên trả về kq -1 
(1,6,8): Nhận thấy hệ số a,b,c!= 0 nên sẽ đi vào giải ptb2, tính đc delta >0 nên tính đc 2 nghiệm x1, x2.
