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
static const char *ng0 = "C:/Users/Ghost/Documents/Anderson/ARM/registerFile.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {21, 0};
static unsigned int ng4[] = {4096U, 0U, 0U, 0U};
static unsigned int ng5[] = {0U, 0U, 0U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {31U, 0U};
static unsigned int ng8[] = {1U, 0U};



static void Initial_35_0(char *t0)
{
    char t5[8];
    char t16[8];
    char t25[8];
    char t26[8];
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
    char *t14;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    int t38;
    char *t39;
    unsigned int t40;
    int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2568);
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

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB6:    xsi_set_current_line(39, ng0);
    t12 = (t0 + 2568);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_signed_equal(t16, 32, t14, 32, t15, 32);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2728);
    t3 = (t0 + 2728);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2728);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 2568);
    t17 = (t15 + 56U);
    t23 = *((char **)t17);
    xsi_vlog_generic_convert_array_indices(t5, t16, t6, t14, 2, 1, t23, 32, 1);
    t24 = (t5 + 4);
    t7 = *((unsigned int *)t24);
    t38 = (!(t7));
    t27 = (t16 + 4);
    t8 = *((unsigned int *)t27);
    t41 = (!(t8));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB12;

LAB13:
LAB9:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    xsi_set_current_line(40, ng0);
    t23 = ((char*)((ng4)));
    t24 = (t0 + 2728);
    t27 = (t0 + 2728);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 2728);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t33 = (t0 + 2568);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_convert_array_indices(t25, t26, t29, t32, 2, 1, t35, 32, 1);
    t36 = (t25 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    t39 = (t26 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB10;

LAB11:    goto LAB9;

LAB10:    t43 = *((unsigned int *)t25);
    t44 = *((unsigned int *)t26);
    t45 = (t43 - t44);
    t46 = (t45 + 1);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, *((unsigned int *)t26), t46, 0LL);
    goto LAB11;

LAB12:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t16);
    t45 = (t9 - t10);
    t46 = (t45 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t16), t46, 0LL);
    goto LAB13;

}

static void Always_46_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    int t41;
    char *t42;
    unsigned int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4712);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(53, ng0);

LAB16:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB20;

LAB17:    if (t18 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t6) = 1;

LAB20:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB21;

LAB22:
LAB23:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);

LAB13:    xsi_set_current_line(50, ng0);
    t28 = ((char*)((ng5)));
    t29 = (t0 + 2728);
    t32 = (t0 + 2728);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2728);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1528U);
    t39 = *((char **)t38);
    xsi_vlog_generic_convert_array_indices(t30, t31, t34, t37, 2, 1, t39, 5, 2);
    t38 = (t30 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (!(t40));
    t42 = (t31 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t31);
    t48 = (t46 - t47);
    t49 = (t48 + 1);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, *((unsigned int *)t31), t49, 0LL);
    goto LAB15;

LAB19:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(55, ng0);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    t21 = (t0 + 2728);
    t28 = (t0 + 2728);
    t29 = (t28 + 72U);
    t32 = *((char **)t29);
    t33 = (t0 + 2728);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1528U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t30, t31, t32, t35, 2, 1, t37, 5, 2);
    t36 = (t30 + 4);
    t40 = *((unsigned int *)t36);
    t41 = (!(t40));
    t38 = (t31 + 4);
    t43 = *((unsigned int *)t38);
    t44 = (!(t43));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB24;

LAB25:    goto LAB23;

LAB24:    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t31);
    t48 = (t46 - t47);
    t49 = (t48 + 1);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, *((unsigned int *)t31), t49, 0LL);
    goto LAB25;

}

static void Cont_61_2(char *t0)
{
    char t5[16];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 64, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 4824);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_bit_copy(t17, 0, t5, 0, 64);
    xsi_driver_vfirst_trans(t12, 0, 63);
    t18 = (t0 + 4728);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_62_3(char *t0)
{
    char t5[16];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1368U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 64, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 4888);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_bit_copy(t17, 0, t5, 0, 64);
    xsi_driver_vfirst_trans(t12, 0, 63);
    t18 = (t0 + 4744);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001077920866_3275311449_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_46_1,(void *)Cont_61_2,(void *)Cont_62_3};
	xsi_register_didat("work_m_00000000001077920866_3275311449", "isim/TB_64_isim_beh.exe.sim/work/m_00000000001077920866_3275311449.didat");
	xsi_register_executes(pe);
}
