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
static const char *ng0 = "C:/Users/Ghost/Documents/Anderson/ARM/SEU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {0U, 0U, 0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {55, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {36, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {43, 0};



static void Always_27_0(char *t0)
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

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);

LAB16:    xsi_set_current_line(32, ng0);
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
    t19 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t19, t7, 0, 0, 64, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(36, ng0);

LAB17:    xsi_set_current_line(37, ng0);
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
    t28 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t28, t7, 0, 0, 64, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(41, ng0);

LAB18:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1048U);
    t9 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t8 + 4);
    t10 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 67108863U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 67108863U);
    t11 = ((char*)((ng6)));
    t18 = (t0 + 1048U);
    t19 = *((char **)t18);
    memset(t21, 0, 8);
    t18 = (t21 + 4);
    t28 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 25);
    t24 = (t23 & 1);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t28);
    t26 = (t25 >> 25);
    t27 = (t26 & 1);
    *((unsigned int *)t18) = t27;
    xsi_vlog_mul_concat(t20, 36, 1, t11, 1U, t21, 1);
    xsi_vlogtype_concat(t7, 64, 64, 3U, t20, 36, t8, 26, t3, 2);
    t29 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t29, t7, 0, 0, 64, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(46, ng0);

LAB19:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng1)));
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
    t11 = ((char*)((ng8)));
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
    t29 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t29, t7, 0, 0, 64, 0LL);
    goto LAB15;

}


extern void work_m_00000000002381817067_4206047371_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000002381817067_4206047371", "isim/TB_64_isim_beh.exe.sim/work/m_00000000002381817067_4206047371.didat");
	xsi_register_executes(pe);
}