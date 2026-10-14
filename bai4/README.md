-bài toán sử dụng thuật toán Euclid, có độ phức tạp thời gian O(log(min(a,n))), giúp xử lí các số nguyên lớn gần như tức thì;
-input: nhập 2 số nguyên a và b;
-output: tìm ra LCM của 2 số đó;
-vd: a=12,b=18;
tính được z = 12*18=216;
vào vòng lặp while, do 12<18 nên lấy 18%12  = 6 nên a=12, b=6. tiếp tục chia dư 12%6 == 0 nên a=0, b=6. thoát while tính ucln = a+b=0+6=6; suy ra bcnn = 216/6=36.
Kết luận bcnn của 12 và 18 là 36. Kết thúc bài toán.
