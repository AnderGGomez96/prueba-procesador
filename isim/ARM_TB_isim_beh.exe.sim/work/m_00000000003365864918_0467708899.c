/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Ghost/Documents/Anderson/PROCEDADOR_DEBUG/IM.v";
static int ng1[] = {0, 0};
static int ng2[] = {512, 0};
static unsigned int ng3[] = {0U, 0U, 0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {4164944544U, 0U, 0U, 0U};
static unsigned int ng6[] = {4164944545U, 0U, 0U, 0U};
static unsigned int ng7[] = {2332098563U, 0U, 0U, 0U};
static int ng8[] = {2, 0};
static unsigned int ng9[] = {3019899043U, 0U, 0U, 0U};
static int ng10[] = {3, 0};
static unsigned int ng11[] = {2432697509U, 0U, 0U, 0U};
static int ng12[] = {4, 0};
static unsigned int ng13[] = {3405840483U, 0U, 0U, 0U};
static int ng14[] = {5, 0};
static unsigned int ng15[] = {4160750565U, 0U, 0U, 0U};
static int ng16[] = {6, 0};
static unsigned int ng17[] = {402653180U, 0U, 0U, 0U};
static int ng18[] = {7, 0};
static unsigned int ng19[] = {4164944883U, 0U, 0U, 0U};
static int ng20[] = {8, 0};
static unsigned int ng21[] = {4160750259U, 0U, 0U, 0U};
static int ng22[] = {9, 0};



static void Initial_28_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng13)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng15)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng17)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng21)));
    t2 = (t0 + 1768);
    t3 = (t0 + 1768);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 1768);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB26;

LAB27:
LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 1768);
    t16 = (t0 + 1768);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 1768);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 1608);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

LAB8:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t14), t35, 0LL);
    goto LAB9;

LAB10:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t14), t35, 0LL);
    goto LAB11;

LAB12:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t14), t35, 0LL);
    goto LAB13;

LAB14:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t14), t35, 0LL);
    goto LAB15;

LAB16:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t14), t35, 0LL);
    goto LAB17;

LAB18:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t14), t35, 0LL);
    goto LAB19;

LAB20:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t14), t35, 0LL);
    goto LAB21;

LAB22:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t14), t35, 0LL);
    goto LAB23;

LAB24:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t14), t35, 0LL);
    goto LAB25;

LAB26:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t14), t35, 0LL);
    goto LAB27;

}

static void Cont_45_1(char *t0)
{
    char t5[16];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 1768);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 511U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 511U);
    xsi_vlog_generic_get_array_select_value(t5, 64, t4, t8, t11, 2, 1, t12, 9, 2);
    t22 = (t0 + 3336);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_bit_copy(t26, 0, t5, 0, 32);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 3256);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000003365864918_0467708899_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Cont_45_1};
	xsi_register_didat("work_m_00000000003365864918_0467708899", "isim/ARM_TB_isim_beh.exe.sim/work/m_00000000003365864918_0467708899.didat");
	xsi_register_executes(pe);
}