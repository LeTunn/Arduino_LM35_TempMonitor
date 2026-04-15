#  Dự án Hệ thống Giám sát Nhiệt độ LM35

##  Mô tả
Dự án sử dụng Arduino và cảm biến LM35 để đọc nhiệt độ. Dữ liệu được đóng gói thành chuỗi JSON và gửi qua Serial, giúp dễ dàng mở rộng và tích hợp với phần mềm trên máy tính.

 Tính năng nổi bật
* Đo nhiệt độ đa kênh (A0, A1, A2).
* Tự động chuyển đổi từ tín hiệu ADC sang độ C.
* Xuất dữ liệu chuẩn JSON chống lỗi phân tích cú pháp.

##  Cấu hình phần cứng
| STT | Tên linh kiện | Số lượng | Ghi chú |
|---|---|---|---|
| 1 | Board Arduino Uno R3 | 1 | Bộ xử lý trung tâm |
| 2 | Cảm biến LM35 | 3 | Đo dải nhiệt độ rộng |
| 3 | Dây cắm | Nhiều | Kết nối linh kiện |

##  Hướng dẫn sử dụng
1. Mở file `firmware/LM35_TempReader/LM35_TempReader.ino`.
2. Nạp code vào mạch Arduino.
3. Bật Serial Monitor (Baudrate 9600) để theo dõi luồng dữ liệu JSON.

##  Cấu trúc thư mục
* `firmware/`: Chứa mã nguồn C++ của Arduino.
* `pc_app/`: Chứa app C# đọc giao diện.
* `docs/`: Tài liệu báo cáo môn học.

## Thành viên nhóm
* **Tô Quang Hiếu** (N23DCCI023) - Chủ repo
* **Lê Thanh Tú** (N23DCCI075) - Collaborator