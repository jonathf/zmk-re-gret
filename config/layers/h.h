/*
Main QWERTY layer.

Assuming US-international keyboard layout.
*/
#define __W &layertap_left LAYER_E LS(W)
#define __E &layertap_left LAYER_F LS(E)
#define __R &kp LS(R)
#define __T &kp LS(T)

#define __Y &kp LS(Y)
#define __U &kp LS(U)
#define __I &kp LS(I)
#define __O &layertap_right LAYER_G LS(O)

#define __A &holdtap_left RALT LS(A)
#define __S &kp LS(S)
#define __D &kp LS(D)
#define __F &kp LS(F)
#define __G &holdtap_left LGUI LS(G)

#define __H &holdtap_right LGUI LS(H)
#define __J &kp LS(J)
#define __K &kp LS(K)
#define __L &kp LS(L)
#define __P &holdtap_right RALT LS(P)

#define __C &holdtap_left LALT LS(C)
#define __V &holdtap_left LCTRL LS(V)
#define __B &holdtap_left LSHIFT LS(B)

#define __N &holdtap_right LSHIFT LS(N)
#define __M &holdtap_right LCTRL LS(M)

ZMK_LAYER(_LAYER_A,                                             TOP_START_PADDING
//      ╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
          __W   __E   __R   __T   __Y   __U   __I   __O         TOP_END_PADDING MIDDLE_START_PADDING
//╭─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────╮
    __A   __S   __D   __F   __G   __H   __J   __K   __L   __P   MIDDLE_END_PADDING BOTTOM_START_PADDING
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
          __C   __V   __B     _PAD      __N   __M   _DOT        BOTTOM_END_PADDING THUMB_START_PADDING
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
                     _CAPS _SPC   _J_B  _J_C                    THUMB_END_PADDING
//                  ╰─────┴─────┴─────┴─────╯
)
