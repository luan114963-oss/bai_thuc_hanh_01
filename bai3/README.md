-Độ phức tạp: O(n) do vòng lặp for duyệt mỗi phần tử 1 lần, nên có n lần lặp lại.
-input: nhập số n và các phần tử trong mảng;
-output: giá trị lớn nhất trong mảng;
-vd: n=3; 2 5 7
vòng lặp for duyệt lần lượt các phần tử, đầu tiên gán max = 2 và so sánh max đó với 2 phần tử còn lại. do 2<5 nên max sẽ đc cập nhật lại và lúc này max = 5, tiếp tục 5<7 nên max đc cập nhật thành 7. Kết thúc vòng lặp for, trả về max = 7;
-vd: n=4; 9 8 34 6
vòng lặp for duyệt lần lượt các phần tử có trong mảng, đầu tiên gán max =9 rồi so sánh với các phần tử còn lại. Lặp lại liên tục cho đến khi gặp số lớn hơn nó thì sẽ cập nhật lại max. Do đó max = 34;

