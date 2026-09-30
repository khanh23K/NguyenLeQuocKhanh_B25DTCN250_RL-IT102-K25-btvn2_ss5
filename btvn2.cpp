#include <stdio.h>
#define SO_BENH_NHAN 4
#define PHI_GOC 200000
#define PHI_BHYT 40000

int main() {
    int tuoi_benh_nhan[SO_BENH_NHAN];
    int co_bao_hiem[SO_BENH_NHAN];
    int phi_kham[SO_BENH_NHAN];

    int tong_doanh_thu = 0;
    int so_ca_uu_tien = 0;

    int i;

    printf("============================================\n");
    printf("   MEDCARE CLINIC - TIEP NHAN BENH NHAN\n");
    printf("============================================\n");

    for (i = 0; i < SO_BENH_NHAN; i++) {

        printf("\n--- Benh nhan %d ---\n", i + 1);

        printf("Nhap tuoi: ");
        scanf("%d", &tuoi_benh_nhan[i]);

        printf("Nhap BHYT (1 = Co, 0 = Khong): ");
        scanf("%d", &co_bao_hiem[i]);
    }

    for (i = 0; i < SO_BENH_NHAN; i++) {


        if (tuoi_benh_nhan[i] <= 0 || tuoi_benh_nhan[i] > 120) {

            phi_kham[i] = 0;

        } else {
            if (co_bao_hiem[i] != 0 && co_bao_hiem[i] != 1) {
                co_bao_hiem[i] = 0;
            }
            if (co_bao_hiem[i] == 1) {
                phi_kham[i] = PHI_BHYT;
            } else {
                phi_kham[i] = PHI_GOC;
            }

            if (tuoi_benh_nhan[i] > 70) {
                so_ca_uu_tien++;
            }
        }


        tong_doanh_thu = tong_doanh_thu + phi_kham[i];
    }

    printf("\n\n============================================\n");
    printf("              KET QUA KHAM\n");
    printf("============================================\n");

    for (i = 0; i < SO_BENH_NHAN; i++) {

        printf("\nBenh nhan %d\n", i + 1);

        printf("Tuoi: %d\n", tuoi_benh_nhan[i]);

        printf("BHYT: %d\n", co_bao_hiem[i]);

        printf("Phi kham: %d VND\n", phi_kham[i]);

        if (tuoi_benh_nhan[i] <= 0 || tuoi_benh_nhan[i] > 120) {

            printf("Luong: LOI DU LIEU\n");

        } else if (tuoi_benh_nhan[i] > 70) {

            printf("Luong: UU TIEN\n");

        } else {

            printf("Luong: THUONG\n");
        }
    }

    printf("\n============================================\n");
    printf("              TONG HOP CA TRUC\n");
    printf("============================================\n");

    printf("Tong doanh thu: %d VND\n", tong_doanh_thu);

    printf("Tong so ca uu tien: %d\n", so_ca_uu_tien);

    printf("============================================\n");

    return 0;
}
