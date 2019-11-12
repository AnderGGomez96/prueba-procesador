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
static const char *ng0 = "C:/Users/Ghost/Documents/Anderson/ARM/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {0U, 0U, 0U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};



static void Always_29_0(char *t0)
{
    char t10[16];
    char t11[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);

LAB22:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1368U);
    t9 = *((char **)t7);
    xsi_vlog_signed_add(t10, 64, t8, 64, t9, 64);
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 64, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB21;

LAB9:    xsi_set_current_line(38, ng0);

LAB23:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    xsi_vlog_signed_minus(t10, 64, t4, 64, t7, 64);
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 64, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB21;

LAB11:    xsi_set_current_line(43, ng0);

LAB24:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    xsi_vlog_signed_bit_and(t10, 64, t4, 64, t7, 64);
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 64, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB21;

LAB13:    xsi_set_current_line(48, ng0);

LAB25:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    xsi_vlog_signed_bit_or(t10, 64, t4, 64, t7, 64);
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 64, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB21;

LAB15:    xsi_set_current_line(53, ng0);

LAB26:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    xsi_vlog_unsigned_equal(t10, 64, t4, 64, t3, 64);
    memset(t12, 0, 8);
    t7 = (t10 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t7) != 0)
        goto LAB29;

LAB30:    t9 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t9);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB31;

LAB32:    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t9) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t12) > 0)
        goto LAB37;

LAB38:    memcpy(t11, t26, 8);

LAB39:    t27 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t27, t11, 0, 0, 1, 0LL);
    goto LAB21;

LAB17:    xsi_set_current_line(57, ng0);

LAB40:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 10);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 10);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 63U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 63U);
    xsi_vlog_signed_arith_lshift(t10, 64, t4, 64, t11, 6);
    t9 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 64, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB21;

LAB19:    xsi_set_current_line(62, ng0);

LAB41:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 10);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 10);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 63U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 63U);
    xsi_vlog_signed_arith_rshift(t10, 64, t4, 64, t11, 6);
    t9 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 64, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB21;

LAB27:    *((unsigned int *)t12) = 1;
    goto LAB30;

LAB29:    t8 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB30;

LAB31:    t21 = ((char*)((ng2)));
    goto LAB32;

LAB33:    t26 = ((char*)((ng1)));
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t11, 1, t21, 1, t26, 1);
    goto LAB39;

LAB37:    memcpy(t11, t21, 8);
    goto LAB39;

}


extern void work_m_00000000003877304069_0886308060_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000003877304069_0886308060", "isim/TB_64_isim_beh.exe.sim/work/m_00000000003877304069_0886308060.didat");
	xsi_register_executes(pe);
}
