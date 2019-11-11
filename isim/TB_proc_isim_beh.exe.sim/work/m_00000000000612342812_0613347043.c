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
static const char *ng0 = "C:/Users/Ghost/Desktop/Procesador/DMIO.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U, 0U, 0U};



static void Initial_33_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);

LAB1:    return;
}

static void Always_38_1(char *t0)
{
    char t6[8];
    char t8[8];
    char t23[8];
    char t56[8];
    char t80[8];
    char t81[8];
    char t88[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    int t100;
    char *t101;
    unsigned int t102;
    int t103;
    int t104;
    unsigned int t105;
    unsigned int t106;
    int t107;
    int t108;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4552);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 12);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 12);
    t15 = (t14 & 1);
    *((unsigned int *)t4) = t15;
    memset(t6, 0, 8);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t16) == 0)
        goto LAB6;

LAB8:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;

LAB9:    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t6);
    t26 = (t24 & t25);
    *((unsigned int *)t23) = t26;
    t27 = (t5 + 4);
    t28 = (t6 + 4);
    t29 = (t23 + 4);
    t30 = *((unsigned int *)t27);
    t31 = *((unsigned int *)t28);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB10;

LAB11:
LAB12:    t55 = ((char*)((ng2)));
    memset(t56, 0, 8);
    t57 = (t23 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t23);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t57);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB16;

LAB13:    if (t68 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t56) = 1;

LAB16:    t72 = (t56 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t56);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 12);
    t12 = (t11 & 1);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 12);
    t15 = (t14 & 1);
    *((unsigned int *)t2) = t15;
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t6);
    t19 = (t17 & t18);
    *((unsigned int *)t8) = t19;
    t7 = (t3 + 4);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    t24 = (t20 | t21);
    *((unsigned int *)t16) = t24;
    t25 = *((unsigned int *)t16);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB23;

LAB24:
LAB25:    t28 = ((char*)((ng2)));
    memset(t23, 0, 8);
    t29 = (t8 + 4);
    t37 = (t28 + 4);
    t50 = *((unsigned int *)t8);
    t51 = *((unsigned int *)t28);
    t52 = (t50 ^ t51);
    t53 = *((unsigned int *)t29);
    t54 = *((unsigned int *)t37);
    t59 = (t53 ^ t54);
    t60 = (t52 | t59);
    t61 = *((unsigned int *)t29);
    t62 = *((unsigned int *)t37);
    t63 = (t61 | t62);
    t64 = (~(t63));
    t65 = (t60 & t64);
    if (t65 != 0)
        goto LAB29;

LAB26:    if (t63 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t23) = 1;

LAB29:    t55 = (t23 + 4);
    t66 = *((unsigned int *)t55);
    t67 = (~(t66));
    t68 = *((unsigned int *)t23);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    t35 = *((unsigned int *)t23);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t23) = (t35 | t36);
    t37 = (t5 + 4);
    t38 = (t6 + 4);
    t39 = *((unsigned int *)t5);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (~(t41));
    t43 = *((unsigned int *)t6);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (~(t45));
    t47 = (t40 & t42);
    t48 = (t44 & t46);
    t49 = (~(t47));
    t50 = (~(t48));
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t51 & t49);
    t52 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t52 & t50);
    t53 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t53 & t49);
    t54 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t54 & t50);
    goto LAB12;

LAB15:    t71 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(42, ng0);

LAB20:    xsi_set_current_line(43, ng0);
    t78 = (t0 + 1368U);
    t79 = *((char **)t78);
    t78 = (t0 + 2568);
    t82 = (t0 + 2568);
    t83 = (t82 + 72U);
    t84 = *((char **)t83);
    t85 = (t0 + 2568);
    t86 = (t85 + 64U);
    t87 = *((char **)t86);
    t89 = (t0 + 1208U);
    t90 = *((char **)t89);
    memset(t88, 0, 8);
    t89 = (t88 + 4);
    t91 = (t90 + 4);
    t92 = *((unsigned int *)t90);
    t93 = (t92 >> 0);
    *((unsigned int *)t88) = t93;
    t94 = *((unsigned int *)t91);
    t95 = (t94 >> 0);
    *((unsigned int *)t89) = t95;
    t96 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t96 & 4095U);
    t97 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t97 & 4095U);
    xsi_vlog_generic_convert_array_indices(t80, t81, t84, t87, 2, 1, t88, 12, 2);
    t98 = (t80 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (!(t99));
    t101 = (t81 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (!(t102));
    t104 = (t100 && t103);
    if (t104 == 1)
        goto LAB21;

LAB22:    goto LAB19;

LAB21:    t105 = *((unsigned int *)t80);
    t106 = *((unsigned int *)t81);
    t107 = (t105 - t106);
    t108 = (t107 + 1);
    xsi_vlogvar_wait_assign_value(t78, t79, 0, *((unsigned int *)t81), t108, 0LL);
    goto LAB22;

LAB23:    t30 = *((unsigned int *)t8);
    t31 = *((unsigned int *)t16);
    *((unsigned int *)t8) = (t30 | t31);
    t22 = (t3 + 4);
    t27 = (t6 + 4);
    t32 = *((unsigned int *)t3);
    t33 = (~(t32));
    t34 = *((unsigned int *)t22);
    t35 = (~(t34));
    t36 = *((unsigned int *)t6);
    t39 = (~(t36));
    t40 = *((unsigned int *)t27);
    t41 = (~(t40));
    t47 = (t33 & t35);
    t48 = (t39 & t41);
    t42 = (~(t47));
    t43 = (~(t48));
    t44 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t44 & t42);
    t45 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t45 & t43);
    t46 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t46 & t42);
    t49 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t49 & t43);
    goto LAB25;

LAB28:    t38 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(47, ng0);

LAB33:    xsi_set_current_line(48, ng0);
    t57 = (t0 + 1368U);
    t58 = *((char **)t57);
    memset(t56, 0, 8);
    t57 = (t56 + 4);
    t71 = (t58 + 4);
    t73 = *((unsigned int *)t58);
    t74 = (t73 >> 0);
    *((unsigned int *)t56) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 >> 0);
    *((unsigned int *)t57) = t76;
    t77 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t77 & 255U);
    t92 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t92 & 255U);
    t72 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t72, t56, 0, 0, 8, 0LL);
    goto LAB32;

}

static void Cont_52_2(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4664);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 4568);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_54_3(char *t0)
{
    char t3[16];
    char t4[8];
    char t6[8];
    char t15[8];
    char t45[16];
    char t52[8];
    char t66[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;

LAB0:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 12);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 12);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t6 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t4, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t31) != 0)
        goto LAB10;

LAB11:    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB12;

LAB13:    t62 = *((unsigned int *)t4);
    t63 = (~(t62));
    t64 = *((unsigned int *)t38);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t38) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t66, 16);

LAB20:    t69 = (t0 + 4728);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    xsi_vlog_bit_copy(t73, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t69, 0, 63);
    t74 = (t0 + 4584);
    *((int *)t74) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t37 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t42 = (t0 + 2568);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t46 = (t0 + 2568);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = (t0 + 2568);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t53 = (t0 + 1208U);
    t54 = *((char **)t53);
    memset(t52, 0, 8);
    t53 = (t52 + 4);
    t55 = (t54 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (t56 >> 0);
    *((unsigned int *)t52) = t57;
    t58 = *((unsigned int *)t55);
    t59 = (t58 >> 0);
    *((unsigned int *)t53) = t59;
    t60 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t60 & 4095U);
    t61 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t61 & 4095U);
    xsi_vlog_generic_get_array_select_value(t45, 64, t44, t48, t51, 2, 1, t52, 12, 2);
    goto LAB13;

LAB14:    t67 = (t0 + 1528U);
    t68 = *((char **)t67);
    t67 = ((char*)((ng3)));
    xsi_vlogtype_concat(t66, 64, 64, 2U, t67, 56, t68, 8);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 64, t45, 64, t66, 64);
    goto LAB20;

LAB18:    memcpy(t3, t45, 16);
    goto LAB20;

}


extern void work_m_00000000000612342812_0613347043_init()
{
	static char *pe[] = {(void *)Initial_33_0,(void *)Always_38_1,(void *)Cont_52_2,(void *)Cont_54_3};
	xsi_register_didat("work_m_00000000000612342812_0613347043", "isim/TB_proc_isim_beh.exe.sim/work/m_00000000000612342812_0613347043.didat");
	xsi_register_executes(pe);
}
