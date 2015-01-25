#include <stdio.h>
#include "hocdec.h"
/* change name when structures in neuron.exe change*/
/* and also change the mos2nrn1.sh script */
int nocmodl5_4;

modl_reg(){
	fprintf(stderr, "Additional mechanisms from files\n");

fprintf(stderr," CADIV.MOD");
fprintf(stderr," CAGK.MOD");
fprintf(stderr," CAL2.MOD");
fprintf(stderr," CAL3D.MOD");
fprintf(stderr," CAN2.MOD");
fprintf(stderr," CAPUMP.MOD");
fprintf(stderr," CAT.MOD");
fprintf(stderr," HH2.MOD");
fprintf(stderr," NMDA.MOD");
fprintf(stderr," NMDA5.MOD");
fprintf(stderr," RELEASE.MOD");
fprintf(stderr," kadist.mod");
fprintf(stderr," kaprox.mod");
fprintf(stderr," kdrca1.mod");
fprintf(stderr," na3.mod");
fprintf(stderr," nax.mod");
NOT_PARALLEL_SUB(fprintf(stderr, "\n");)
_CADIV_reg();
_CAGK_reg();
_CAL2_reg();
_CAL3D_reg();
_CAN2_reg();
_CAPUMP_reg();
_CAT_reg();
_HH2_reg();
_NMDA_reg();
_NMDA5_reg();
_RELEASE_reg();
_kadist_reg();
_kaprox_reg();
_kdrca1_reg();
_na3_reg();
_nax_reg();
}
