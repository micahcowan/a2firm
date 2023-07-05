;; a2-firm.inc
;;   entry points, soft switches, and ZP var locations
;;   from the Apple ][ monitor/AppleSoft

; If you want names to be dumped directly into the global namespace,
;  then define A2FIRM_NO_NAMESPACES

; Names are taken from (in order:)
;   Apple II and II+ Reference Manual
;   https://6502disassembly.com/a2-rom/ 

.ifndef A2FIRM_NO_NAMESPACES
.scope ZP
.endif
CHARAC	= $0D ; AppleSoft
ENDCHR	= $0E ; AppleSoft
VALTYP	= $11 ; AppleSoft
SUBFLG	= $14 ; $00 subscripts allowed, $80=no subscripts
WNDLFT  = $20
WNDWDTH = $21
WNDTOP  = $22
WNDBTM  = $23
CH      = $24
CV      = $25
GBASL   = $26
GBAS    = GBASL
GBASH   = $27
BASL    = $28
BAS     = BASL
BASH    = $29
BAS2L   = $2A
BAS2H   = $2B
H2	= $2C ; Used by PLOT rtns
V2	= $2D ; Used by PLOT rtns
COLOR   = $30
MODE    = $31
INVFLG  = $32
PROMPT  = $33
CSWL    = $36
CSW     = CSWL
CSWH    = $37
KSWL    = $38
KSW     = KSWL
KSWH    = $39
A1	= $3C
A2	= $3D
RNDL    = $4E
RND     = RNDL
RNDH    = $4F
; The following are all AppleSoft-used locations
LINNUM	= $50
TEMPPT  = $52
LASTPT	= $53
INDEX   = $5E
DEST    = $60
TXTTAB  = $67
VARTAB  = $69
ARYTAB  = $6B
STREND	= $6D
FRETOP  = $6F
FRESPC  = $71
MEMSIZ  = $73
MEMSIZE = MEMSIZ
CURLIN  = $75
OLDLIN	= $77
DATLIN	= $7B
DATPTR	= $7D
VARPNT  = $83
DSCTMP	= $9D
FAC     = $9D
FORPNT	= $85
TEMP3	= $8A
TEMP1	= $9e
HIGHDS	= $94
HIGHTR	= $96
TEMP2   = $98
LOWTR	= $9B
ARG     = $A5
STRNG1	= $AB
STRING1 = STRING1
STRNG2  = $AD
STRING2 = STRNG2
PRGEND  = $AF
TXTPTR  = $B8
RNDFP	= $C9 ; name is mine; AppleSoft Internal Entry Points calls this RND, but I'm using that for RNDL
ERRFLG  = $D8
ERRLIN	= $DA
ERRNUM  = $DE
ERRPOS	= $DC ; TXTPTR save for HNDLERR
ERRSTK	= $DF
HPAG	= $E6
FIRST	= $F0 ; Used by PLOT rtns
SPDBYT	= $F1 ; Speed = delay number
ORMASK	= $F3 ; Mask for flashing output
REMSTK	= $F8 ; Stack ptr saved before each stm
.ifndef A2FIRM_NO_NAMESPACES
.endscope
.endif

.ifndef A2FIRM_NO_NAMESPACES
.scope Mon
.endif
; Non-ZP locations
STACK	= $100
IN      = $200	 ; what original Apple ][ monitor listing in techref calls it
BUF	= IN	 ; what AppleSoft Internal Entry Points (from the Apple Orchard) calls it
BRKV    = $3F0
SOFTEV  = $3F2
PWREDUP = $3F4
POWEREDUP = PWREDUP
AMPERV  = $3F5
USRADR  = $3FB
NMI     = $3FB
IRQLOC  = $3FE
LINE1   = $400

.ifndef A2FIRM_NO_NAMESPACES
.scope ASoft
.endif
CHRGET  = $B1 ; zero page routine
CHRGOT  = $B7 ; zero page routine
AMP          = $03F5
ERROR        = $D412
LINGET	     = $DA0C
SYNERR       = $DEC9
FRMEVL       = $DD7B
BASIC        = $E000
BASIC2       = $E003
AYINT        = $E10C
GIVAYF       = $E2F2 ; Float the signed integer in A,Y
SNGFLT	     = $E301 ; Float the unsigned integer in Y
FREFAC       = $E600
GTBYTC	     = $E6F5
GETBYT	     = $E6F8
CONINT	     = $E6FB
VALIDX       = $E70F
FSUB	     = $E7A7
FSUBT	     = $E7AA
FADDH	     = $E7A0 ; Add 1/2 to FAC
FADD	     = $E7BE
FADDT        = $E7C1
FMULT        = $E97F
FMULTT       = $E982
LOAD_ARG_FROM_YA = $E9E3
MUL10	     = $EA39
DIV10	     = $EA55
FDIV         = $EA66
FDIVT        = $EA69
LOAD_FAC_FROM_YA = $EAF9
SIGN	     = $EB82
FLOAT	     = $EB93 ; Float the signed integer in A.
FCOMP	     = $EBB2
QINT	     = $EBF2
FIN          = $EC4A
PRINT_FAC    = $ED2E
FOUT	     = $ED34
FPWRT        = $EE97
NEGOP	     = $EED0 ; FAC = -FAC
PLOTFNS	     = $F1EC
HFNS	     = $F6B9

; packed-form floating-point constants. Names mine.
NUM_QTR		= $F070
NUM_HALF	= $EE64
NUM_MHALF	= $E937 ; -1/2
NUM_ONE		= $E913
NUM_TEN		= $EA50
NUM_SQRHALF	= $E92D ; SQR(.5)
NUM_SQRTWO	= $E932 ; SQR(2)
NUM_LN2		= $E93C ; LN(2)
NUM_LOGE2	= $EEDB
NUM_HALFPI	= $F063
NUM_TAU		= $F06B
NUM_MWORD	= $E0FE	; -32768
NUM_THOUMIL	= $ED14 ; 1,000,000,000
.ifndef A2FIRM_NO_NAMESPACES
.endscope
.endif

; Entry points
PLOT    = $F800
HLINE   = $F819
VLINE   = $F828
CLRSCR  = $F832
GBASCALC= $F847
GBCALC  = $F856
SETCOL  = $F864
SCRN    = $F871
PRNTYX	= $F940
PRNTAX	= $F941
PRNTX   = $F944
PRBLNK	= $F94B ; prints 3 spaces
BREAK	= $FA4C
OLDBRK	= $FA59
RESET	= $FA62
PWRUP	= $FAA6
PREAD   = $FB1E
SETTXT  = $FB39
SETGR   = $FB40
SETWND	= $FB4B
TABV    = $FB5B ; STA CV followed by JMP VTAB
BASCALC = $FBC1
BELL1   = $FBD9
VTAB    = $FC22
VTABZ   = $FC24
HOME    = $FC58
SCROLL  = $FC70
CLREOL  = $FC9C
CLEOLZ  = $FC9E
WAIT    = $FCA8
RD2BIT  = $FCFA
RDBIT	= $FCFD
RDKEY   = $FD0C
KEYIN   = $FD1B
GETLN   = $FD6A
CROUT   = $FD8E
PRBYTE  = $FDDA
PRHEX	= $FDE3
COUT    = $FDED
COUT1   = $FDF0
SETMODE	= $FE18
SETMDZ	= $FE1D
SETINV  = $FE80
SETNORM = $FE84
SETKBD  = $FE89
INPORT  = $FE8B
SETVID	= $FE93
OUTPORT = $FE95
WRITE   = $FECD
READ    = $FEFD
READ2   = $FF02
MONZ    = $FF69
BELL	= $FF3A
.ifndef A2FIRM_NO_NAMESPACES
.endscope
.endif

.ifndef A2FIRM_NO_NAMESPACES
.scope Switch
.endif
KBD             = $C000
KBDSTRB         = $C010
TAPEOUT         = $C020
SPKR            = $C030
TXTCLR          = $C050
TXTSET          = $C051
MIXCLR          = $C052
MIXSET          = $C053
LOWSCR          = $C054
SEL_TEXT_P1     = LOWSCR
HISCR           = $C055
SEL_TEXT_P2     = HISCR
LORES           = $C056
HIRES           = $C057
SETAN0          = $C058
CLRAN0          = $C059
SETAN1          = $C05A
CLRAN1          = $C05B
SETAN2          = $C05C
CLRAN2          = $C05D
SETAN3          = $C05E
CLRAN3          = $C05F
TAPEIN          = $C060
PADDL0          = $C064
PTRIG           = $C070
.ifndef A2FIRM_NO_NAMESPACES
.endscope
.endif
