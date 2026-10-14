-input: nhập số nguyên n;
-output: ktra số vừa nhập có phải số hoàn hảo không;
-Nhận xét: vòng for thực chất là tổng các ước của số đó(ngoại trừ chính nó, do chỉ chạy đến n/2)
-vd:
1: n=28, thỏa mãn điều kiện n>0 nên đi vào vòng for, tìm đc các ước của 28 là 1,2,4,7,14 và tổng S = 28 == 28. Lập tức trả về kết quả 1( có nghĩa là 28 là số hoàn hảo)
2: n=20 thỏa mãn điều kiện n>0 nên đi vào vòng for, tìm đc các ước của 20 là 1,2,4,5,10 và tổng S == 22 != 28. Lập tức trả về kết quả 0( có nghĩa là 20 không là số hoàn hảo)
3: n=-9 <0 nên trả về kết quả 0 ngay lập tức mà không đi vào vòng for(có nghĩa là -9 không là số hoàn hảo)
4: n=6 thỏa mãn điều kiện n>0 nên đi vào vòng for, tìm được các ước của 6 là 1,2,3 và tổng S = 6==6. Lập tức trả về kết quả 1(có nghĩa là 6 là số hoàn hảo)
