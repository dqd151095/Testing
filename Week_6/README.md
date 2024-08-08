Tạo 1 mảng để chứa thông tin.
	Thông tin bao gồm:
		+ ID (một số kiểu int bất kỳ )
		+ thông tin bổ sung ( một số kiểu int bất kỳ )
		+ Mức độ ưu tiên ( 0 -> 255 )
Yêu cầu:
1. Mảng chứa tối đa 10 phần tử, và được thêm bắt đầu từ vị trí cuối mảng trở về ( thông tin được nhập từ bàn phím )
2. Khi truyền một thông tin khác nếu mảng đã ĐẦY thì tiến hành so sánh độ ưu tiên:
	+ Thông tin mới truyền sẽ được thay thế tại 2 vị trí đầu tiên của mảng ( vị trí 0 và 1 ) nếu:
		- Độ ưu tiên của thông tin mới lớn hơn độ uu tiên của vị trí được lưu data -> Lưu 
        - Độ ưu tiên của thông tin mới nhỏ hơn hoặc bằng vị trí được lưu data -> Ko Lưu
		- Ưu tiên so sánh vị trí 1 trước
Eg: Khi buffer đầy
    case 1: ID sẽ so vs vị trí 1 nếu priority lớn hơn thì được lưu vào vị trí 1. Nếu bé hơn hoặc bằng thì skip case 2: skip vị trí 1 và so sánh vs vị trí 0.
    case 3: skip cả 2 vị trí và không lưu được data
