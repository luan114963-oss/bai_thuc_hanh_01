-Độ phức tạp O(sqrt(n)), do thay vì lặp n lần, vòng lặp for chỉ chạy đến sqrt(n) tức chỉ lặp sqrt(n) lần, tối ưu bài toán hơn rất nhiều
-input: số n;
-output: kiểm tra có phải số nguyên tố hay không;
vd: n=3
  isprime(3)
  3<2 là sai (bỏ qua)
  3==2 là sai(bỏ qua)
  3%2==1 !=0 (bỏ qua)
  thực hiện vòng lặp từ 3 đến sqrt(3) nhận thấy 3<sqrt(3) nên lập tức thoát vòng for và trả về true, là số nguyên tố.
-vd: n=2;
  isprime(2)
  2<2 sai(bỏ qua)
  2==2 đúng
  thoát hàm trả về kết luận là số nguyên tố
  
