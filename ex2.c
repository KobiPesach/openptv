#include<stdio.h>

typedef struct {
	int nlay;
	double n1;
	double n2[3];
	double d[3];
	double n3;
	int lut;
} mm_np;


typedef struct {
	int num_cams;
	char **img_base_name; /* Note the duplication with sequence_par. */
	char **cal_img_base_name;
	int hp_flag;
	int allCam_flag;
	int tiff_flag;
	int imx;
	int imy;
	double pix_x;
	double pix_y;
	int chfield;
	mm_np *mm;
} control_par;


int compare_mm_np(mm_np *mm1, mm_np *mm2)
{
	if ((mm1->nlay == mm2->nlay) && (mm1->n1 == mm2->n1)  && (mm1->n2[3] == mm2->n2[3]) &&
	 (mm1->d[3] == mm2->d[3]) && (mm1->n3 == mm2->n3) && (mm1->lut == mm2->lut))
		return 1;
	else
		return 0;
}
int compare_control_par(control_par *c1, control_par *c2)
{
	if (compare_mm_np(c1->mm,c2->mm))
		return 1;
	else
		return 0;
}

main ()
{
}