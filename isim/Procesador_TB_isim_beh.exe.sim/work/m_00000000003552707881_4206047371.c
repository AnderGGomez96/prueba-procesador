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
static const char *ng0 = "C:/Users/Ghost/Desktop/Procesador/SEU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U, 0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {55, 0};
static int ng5[] = {10, 0};
static int ng6[] = {36, 0};
static int ng7[] = {11, 0};
static unsigned int ng8[] = {0U, 0U};
static int ng9[] = {43, 0};



static void Always_28_0(char *t0)
{
    char t7[16];
    char t8[8];
    char t20[16];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3256);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(48, ng0);

LAB22:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 67108863U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 67108863U);
    t9 = ((char*)((ng6)));
    t10 = (t0 + 1048U);
    t11 = *((char **)t10);
    memset(t21, 0, 8);
    t10 = (t21 + 4);
    t18 = (t11 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (t22 >> 25);
    t24 = (t23 & 1);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t18);
    t26 = (t25 >> 25);
    t27 = (t26 & 1);
    *((unsigned int *)t10) = t27;
    xsi_vlog_mul_concat(t20, 36, 1, t9, 1U, t21, 1);
    xsi_vlogtype_concat(t7, 64, 62, 2U, t20, 36, t8, 26);
    t19 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t19, t7, 0, 0, 64, 0LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);

LAB18:    xsi_set_current_line(33, ng0);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 10);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 10);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4095U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 4095U);
    t18 = ((char*)((ng2)));
    xsi_vlogtype_concat(t7, 64, 64, 2U, t18, 52, t8, 12);
    t19 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t19, t7, 0, 0, 64, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(36, ng0);

LAB19:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t9 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 12);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 12);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 511U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 511U);
    t10 = ((char*)((ng4)));
    t11 = (t0 + 1048U);
    t18 = *((char **)t11);
    memset(t21, 0, 8);
    t11 = (t21 + 4);
    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 20);
    t24 = (t23 & 1);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t19);
    t26 = (t25 >> 20);
    t27 = (t26 & 1);
    *((unsigned int *)t11) = t27;
    xsi_vlog_mul_concat(t20, 55, 1, t10, 1U, t21, 1);
    xsi_vlogtype_concat(t7, 64, 64, 2U, t20, 55, t8, 9);
    t28 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t28, t7, 0, 0, 64, 0LL);
    goto LAB17;

LAB11:    xsi_set_current_line(40, ng0);

LAB20:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t9 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 67108863U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 67108863U);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 1048U);
    t18 = *((char **)t11);
    memset(t21, 0, 8);
    t11 = (t21 + 4);
    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 25);
    t24 = (t23 & 1);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t19);
    t26 = (t25 >> 25);
    t27 = (t26 & 1);
    *((unsigned int *)t11) = t27;
    xsi_vlog_mul_concat(t20, 36, 1, t10, 1U, t21, 1);
    xsi_vlogtype_concat(t7, 64, 62, 2U, t20, 36, t8, 26);
    t28 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t28, t7, 0, 0, 64, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(44, ng0);

LAB21:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1048U);
    t9 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t8 + 4);
    t10 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 5);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 5);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 524287U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 524287U);
    t11 = ((char*)((ng9)));
    t18 = (t0 + 1048U);
    t19 = *((char **)t18);
    memset(t21, 0, 8);
    t18 = (t21 + 4);
    t28 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 23);
    t24 = (t23 & 1);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t28);
    t26 = (t25 >> 23);
    t27 = (t26 & 1);
    *((unsigned int *)t18) = t27;
    xsi_vlog_mul_concat(t20, 43, 1, t11, 1U, t21, 1);
    xsi_vlogtype_concat(t7, 64, 64, 3U, t20, 43, t8, 19, t3, 2);
    t29 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t29, t7, 0, 0, 64, 0LL);
    goto LAB17;

}

static void Cont_55_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3352);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 1);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t10 = (t0 + 3272);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000003552707881_4206047371_init()
{
	static char *pe[] = {(void *)Always_28_0,(void *)Cont_55_1};
	xsi_register_didat("work_m_00000000003552707881_4206047371", "isim/Procesador_TB_isim_beh.exe.sim/work/m_00000000003552707881_4206047371.didat");
	xsi_register_executes(pe);
}
