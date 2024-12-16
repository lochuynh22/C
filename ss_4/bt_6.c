def tinh_tien_dien(dien_tieu_thu):
    # Các mức giá điện
    bac_1 = (50, 1678)
    bac_2 = (100, 1734)
    bac_3 = (200, 2014)
    bac_4 = (300, 2536)
    bac_5 = (400, 2834)
    bac_6 = (float('inf'), 2927)

    # Tính tiền điện
    tien_dien = 0
    if dien_tieu_thu <= bac_1[0]:
        tien_dien = dien_tieu_thu * bac_1[1]
    elif dien_tieu_thu <= bac_2[0]:
        tien_dien = bac_1[0] * bac_1[1] + (dien_tieu_thu - bac_1[0]) * bac_2[1]
    elif dien_tieu_thu <= bac_3[0]:
        tien_dien = bac_1[0] * bac_1[1] + (bac_2[0] - bac_1[0]) * bac_2[1] + (dien_tieu_thu - bac_2[0]) * bac_3[1]
    elif dien_tieu_thu <= bac_4[0]:
        tien_dien = bac_1[0] * bac_1[1] + (bac_2[0] - bac_1[0]) * bac_2[1] + (bac_3[0] - bac_2[0]) * bac_3[1] + (dien_tieu_thu - bac_3[0]) * bac_4[1]
    elif dien_tieu_thu <= bac_5[0]:
        tien_dien = bac_1[0] * bac_1[1] + (bac_2[0] - bac_1[0]) * bac_2[1] + (bac_3[0] - bac_2[0]) * bac_3[1] + (bac_4[0] - bac_3[0]) * bac_4[1] + (dien_tieu_thu - bac_4[0]) * bac_5[1]
    else:
        tien_dien = bac_1[0] * bac_1[1] + (bac_2[0] - bac_1[0]) * bac_2[1] + (bac_3[0] - bac_2[0]) * bac_3[1] + (bac_4[0] - bac_3[0]) * bac_4[1] + (bac_5[0] - bac_4[0]) * bac_5[1] + (dien_tieu_thu - bac_5[0]) * bac_6[1]
    
    return tien_dien

# Bước 1: Yêu cầu người dùng nhập chỉ số cũ và chỉ số mới
chi_so_cu = int(input("Nhập chỉ số công tơ điện ở đầu tháng: "))
chi_so_moi = int(input("Nhập chỉ số công tơ điện ở cuối tháng: "))

# Bước 2: Tính lượng điện tiêu thụ
dien_tieu_thu = chi_so_moi - chi_so_cu

# Bước 3: Tính toán tiền điện theo bậc giá
tien_dien = tinh_tien_dien(dien_tieu_thu)

# In kết quả
print(f"Lượng điện tiêu thụ trong tháng: {dien_tieu_thu} kWh")
print(f"Tiền điện phải trả: {tien_dien} VNĐ")
