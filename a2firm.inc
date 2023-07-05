;; a2-firm.inc
;;   entry points, soft switches, and ZP var locations
;;   from the Apple ][ monitor/AppleSoft

; If you want names to be dumped directly into the global namespace,
;  then define A2FIRM_NO_NAMESPACES

.ifndef A2FIRM_NO_NAMESPACES
.scope ZP
.endif
WNDLFT  = $20
WNDWDTH = $21
WNDTOP  = $22
WNDBTM  = $23
CH      = $24
CV      = $25
BASL    = $28
BASH    = $29
BAS2L   = $2a
BAS2H   = $2b
INVFLG  = $32
PROMPT  = $33
CSWL    = $36
KSWL    = $38
RNDL    = $4E
RNDH    = $4F
INDEX   = $5E ; AppleSoft
DEST    = $60 ; AppleSoft
TEXTTAB = $67
VARTAB  = $69
FRETOP  = $6F ; AppleSoft
MEMSIZE = $73 ; AppleSoft
FAC     = $9D ; AppleSoft
ARG     = $A5 ; AppleSoft
STRNG2  = $AD ; AppleSoft
STRING2 = AS_STRNG2
PRGEND  = $AF
TXTPTR  = $B8 ; AppleSoft
ERRFLG  = $D8 ; AppleSoft
.ifndef A2FIRM_NO_NAMESPACES
.endscope
.endif

.ifndef A2FIRM_NO_NAMESPACES
.scope Mon
.endif
BASCALC = $FBC1
BELL1   = $FBD9
VTAB    = $FC22
VTABZ   = $FC24
HOME    = $FC58
SCROLL  = $FC70
CLREOL  = $FC9C
CLEOLZ  = $FC9E
KEYIN   = $FD1B
GETLN   = $FD6A
CROUT   = $FD8E
PRBYTE  = $FDDA
COUT    = $FDED
COUT1   = $FDF0
MONZ    = $FF69
.ifndef A2FIRM_NO_NAMESPACES
.endscope
.endif

.ifndef A2FIRM_NO_NAMESPACES
.scope ASoft
.endif
CHRGET  = $B1 ; zero page routine
CHRGOT  = $B7 ; zero page routine
AMP          = $03F5
ERROR        = $D412
SYNERR       = $DEC9
FRMEVL       = $DD7B
AYINT        = $E10C
GIVAYF       = $E2F2
FREFAC       = $E600
VALIDX       = $E70F
FADDT        = $E7C1
FMULT        = $E97F
FMULTT       = $E982
LOAD_ARG_FROM_YA = $E9E3
LOAD_FAC_FROM_YA = $EAF9
FDIV         = $EA66
FDIVT        = $EA69
FIN          = $EC4A
PRINT_FAC    = $ED2E
FPWRT        = $EE97
.ifndef A2FIRM_NO_NAMESPACES
.endscope
.endif

.ifndef A2FIRM_NO_NAMESPACES
.scope Switch
.endif
KBD             = $C000
KBDSTRB         = $C010
SPKR            = $C030
SEL_TEXT_P1     = $C054
SEL_TEXT_P2     = $C055
.ifndef A2FIRM_NO_NAMESPACES
.endscope
.endif
