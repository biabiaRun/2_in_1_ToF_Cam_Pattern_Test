# ----------------------------------------------------------------------------------------------------------------------
#                                        Configuration for IRS2771C_A1x
# ----------------------------------------------------------------------------------------------------------------------
# Header Use case  Date: 03/10/2019 Time: 2:33 PM. file name: ES_limits_gen_B1x_V119_con-12.xlsm, ConfigGenerator_V2.11
# RawFrames: 11
# Frame Rate: 5 fps
# Tint_max: 0.128ms @ 60.24MHz (Goff) / 0.86ms @ 80.32MHz (P4) / 0.86ms @ 60.24MHz (P4) /  0.83ms @ 60.24MHz (Goff) / 0.83ms @ 60.24MHz (Gon) /
# Tint_start: 0.128ms @ 60.24MHz (Goff) / 0.86ms @ 80.32MHz (P4) / 0.86ms @ 60.24MHz (P4) /  0.83ms @ 60.24MHz (Goff) / 0.83ms @ 60.24MHz (Gon) /
# Header Thresholds for Standard: 2014
# Opt_power = 1259 mW  @ 25[%] Duty Cycle / Alpha = 10.35 / Correction Factor = 143.478260869565
# Margin Eye = 1.447 / Margin Skin = 1 / Wave length = 932 nm / Calculated Min. Margin = 4.61 [mW]
# Power conversion Factor = 0.8 (W/A) / Shunt Resistor = 0.051Ohm / PMOS test = FALSE / Plausibility sample =  0x1
# Margin Init = 1 / plausibility power HH = 1264 mW / plausibility power HL = 595 mW / plausibility power LH = 109 mW / plausibility power LL= -109 mW / min. Idle Time = 0.2 s
# Module ID 0xFFFF / 0xFFFF / 0xFFFF / 0xFFFF / 0x0000 / 0x0000 / 0x0000 / 0x0022 / Europa 2
# ----------------------------------------------------------------------------------------------------------------------
# 									Configuration Infos:
# 	F_ref: 24.0 MHz		Illu-DC: 25.00			Code-Lenght: 4			SSC active: 1
# 	LUT: 0				Illu-Freq: 80.32 MHz	FSM-Freq: 80.32 MHz		SSC_freq: 9887.70 Hz	SSC_dev: 499999.52 Hz
# 	LUT: 1				Illu-Freq: 60.24 MHz	FSM-Freq: 60.24 MHz		SSC_freq: 9536.64 Hz	SSC_dev: 374404.19 Hz
# ----------------------------------------------------------------------------------------------------------------------
full_cfg = [
	(0x8423, 0x00A2),	 # FRAMEBLANK
	(0x9000, 0x1E1E),	 # S00_EXPOTIME 0.128 ms @ 60.24 MHz (Grey-Scale)
	(0x9001, 0x0000),	 # S00_FRAMETIME
	(0x9002, 0x61BA),	 # S01_EXPOTIME 0.860 ms @ 80.32 MHz
	(0x9003, 0x0000),	 # S01_FRAMETIME
	(0x9004, 0x61BA),	 # S02_EXPOTIME 0.860 ms @ 80.32 MHz
	(0x9005, 0x0000),	 # S02_FRAMETIME
	(0x9006, 0x61BA),	 # S03_EXPOTIME 0.860 ms @ 80.32 MHz
	(0x9007, 0x0000),	 # S03_FRAMETIME
	(0x9008, 0x61BA),	 # S04_EXPOTIME 0.860 ms @ 80.32 MHz
	(0x9009, 0x0000),	 # S04_FRAMETIME
	(0x900A, 0x594B),	 # S05_EXPOTIME 0.860 ms @ 60.24 MHz
	(0x900B, 0x0000),	 # S05_FRAMETIME
	(0x900C, 0x594B),	 # S06_EXPOTIME 0.860 ms @ 60.24 MHz
	(0x900D, 0x0000),	 # S06_FRAMETIME
	(0x900E, 0x594B),	 # S07_EXPOTIME 0.860 ms @ 60.24 MHz
	(0x900F, 0x0000),	 # S07_FRAMETIME
	(0x9010, 0x594B),	 # S08_EXPOTIME 0.860 ms @ 60.24 MHz
	(0x9011, 0x0000),	 # S08_FRAMETIME
	(0x9012, 0x5869),	 # S09_EXPOTIME 0.830 ms @ 60.24 MHz (Grey-Scale)
	(0x9013, 0x0000),	 # S09_FRAMETIME
	(0x9014, 0x5869),	 # S10_EXPOTIME 0.830 ms @ 60.24 MHz (Grey-Scale Illuminated)
	(0x9015, 0x0000),	 # S10_FRAMETIME
	(0x9080, 0x1E1E),	 # S00_EXPOTIMEMAX 0.128 ms @ 60.24 MHz (Grey-Scale)
	(0x9081, 0x0000),	 # S00_FRAMETIMEMIN
	(0x9082, 0x10A0),	 # S00_ILLUCFG Gray-Scale @ 60.24 MHz (LUT1)
	(0x9083, 0x00A0),	 # S00_SENSORCFG (Greyscale)
	(0x9084, 0x8000),	 # S00_ROCFG (Reconfig allowed)
	(0x9085, 0x61BA),	 # S01_EXPOTIMEMAX 0.860 ms @ 80.32 MHz
	(0x9086, 0x0000),	 # S01_FRAMETIMEMIN
	(0x9087, 0x0000),	 # S01_ILLUCFG 0?? @ 80.32 MHz (LUT0)
	(0x9088, 0x0000),	 # S01_SENSORCFG
	(0x9089, 0x0000),	 # S01_ROCFG (Reconfig forbidden)
	(0x908A, 0x61BA),	 # S02_EXPOTIMEMAX 0.860 ms @ 80.32 MHz
	(0x908B, 0x0000),	 # S02_FRAMETIMEMIN
	(0x908C, 0x0020),	 # S02_ILLUCFG 90?? @ 80.32 MHz (LUT0)
	(0x908D, 0x0000),	 # S02_SENSORCFG
	(0x908E, 0x0000),	 # S02_ROCFG (Reconfig forbidden)
	(0x908F, 0x61BA),	 # S03_EXPOTIMEMAX 0.860 ms @ 80.32 MHz
	(0x9090, 0x0000),	 # S03_FRAMETIMEMIN
	(0x9091, 0x0040),	 # S03_ILLUCFG 180?? @ 80.32 MHz (LUT0)
	(0x9092, 0x0000),	 # S03_SENSORCFG
	(0x9093, 0x0000),	 # S03_ROCFG (Reconfig forbidden)
	(0x9094, 0x61BA),	 # S04_EXPOTIMEMAX 0.860 ms @ 80.32 MHz
	(0x9095, 0x0000),	 # S04_FRAMETIMEMIN
	(0x9096, 0x0060),	 # S04_ILLUCFG 270?? @ 80.32 MHz (LUT0)
	(0x9097, 0x0000),	 # S04_SENSORCFG
	(0x9098, 0x0000),	 # S04_ROCFG (Reconfig forbidden)
	(0x9099, 0x594B),	 # S05_EXPOTIMEMAX 0.860 ms @ 60.24 MHz
	(0x909A, 0x0000),	 # S05_FRAMETIMEMIN
	(0x909B, 0x1000),	 # S05_ILLUCFG 0?? @ 60.24 MHz (LUT1)
	(0x909C, 0x0000),	 # S05_SENSORCFG
	(0x909D, 0x0000),	 # S05_ROCFG (Reconfig forbidden)
	(0x909E, 0x594B),	 # S06_EXPOTIMEMAX 0.860 ms @ 60.24 MHz
	(0x909F, 0x0000),	 # S06_FRAMETIMEMIN
	(0x90A0, 0x1020),	 # S06_ILLUCFG 90?? @ 60.24 MHz (LUT1)
	(0x90A1, 0x0000),	 # S06_SENSORCFG
	(0x90A2, 0x0000),	 # S06_ROCFG (Reconfig forbidden)
	(0x90A3, 0x594B),	 # S07_EXPOTIMEMAX 0.860 ms @ 60.24 MHz
	(0x90A4, 0x0000),	 # S07_FRAMETIMEMIN
	(0x90A5, 0x1040),	 # S07_ILLUCFG 180?? @ 60.24 MHz (LUT1)
	(0x90A6, 0x0000),	 # S07_SENSORCFG
	(0x90A7, 0x0000),	 # S07_ROCFG (Reconfig forbidden)
	(0x90A8, 0x594B),	 # S08_EXPOTIMEMAX 0.860 ms @ 60.24 MHz
	(0x90A9, 0x0000),	 # S08_FRAMETIMEMIN
	(0x90AA, 0x1060),	 # S08_ILLUCFG 270?? @ 60.24 MHz (LUT1)
	(0x90AB, 0x0000),	 # S08_SENSORCFG
	(0x90AC, 0x0000),	 # S08_ROCFG (Reconfig forbidden)
	(0x90AD, 0x5869),	 # S09_EXPOTIMEMAX 0.830 ms @ 60.24 MHz (Grey-Scale)
	(0x90AE, 0x0000),	 # S09_FRAMETIMEMIN
	(0x90AF, 0x10A0),	 # S09_ILLUCFG Gray-Scale @ 60.24 MHz (LUT1)
	(0x90B0, 0x00A0),	 # S09_SENSORCFG (Greyscale)
	(0x90B1, 0x8000),	 # S09_ROCFG (Reconfig allowed)
	(0x90B2, 0x5869),	 # S10_EXPOTIMEMAX 0.830 ms @ 60.24 MHz (Grey-Scale Illuminated)
	(0x90B3, 0x0000),	 # S10_FRAMETIMEMIN
	(0x90B4, 0x1000),	 # S10_ILLUCFG Gray-Scale @ 60.24 MHz (Illuminated) (LUT1)
	(0x90B5, 0x00A0),	 # S10_SENSORCFG (Greyscale)
	(0x90B6, 0xC000),	 # S10_ROCFG (Reconfig & Usecase Switch allowed)
	(0x91C0, 0x0592),	 # CSICFG
	(0x91C1, 0x0000),	 # ROICOLMIN
	(0x91C2, 0x01BF),	 # ROICOLMAX
	(0x91C3, 0xA700),	 # ROIROW
	(0x91C4, 0x0240),	 # ROS
	(0x91C5, 0x0012),	 # PDMEAS0
	(0x91C7, 0x0008),	 # EXPCFG0
	(0x91C8, 0x0020),	 # EXPCFG1
	(0x91C9, 0x8008),	 # PSOUT (SE enabled)
	(0x91CB, 0x0135),	 # PADMODCFG
	(0x91D2, 0x000B),	 # MB_CFG0 (11 sequences to execute)
	(0x91D6, 0x249F),	 # MB0_FRAMETIME (5 fps)
	(0x91DE, 0x0008),	 # MBSEQ0_CFG0 (MB0 Repetitions = 1)
	(0x91ED, 0x1EA1),	 # PLL_MODLUT0_CFG0 (for f_illu = 80.32 MHz [f_mod = 321.28 MHz])
	(0x91EE, 0xBF26),	 # PLL_MODLUT0_CFG1 (for f_illu = 80.32 MHz [f_mod = 321.28 MHz])
	(0x91EF, 0x0008),	 # PLL_MODLUT0_CFG2 (for f_illu = 80.32 MHz [f_mod = 321.28 MHz])
	(0x91F0, 0x0901),	 # PLL_MODLUT0_CFG3 (for f_illu = 80.32 MHz [f_mod = 321.28 MHz])
	(0x91F1, 0x5555),	 # PLL_MODLUT0_CFG4 (for f_illu = 80.32 MHz [f_mod = 321.28 MHz])
	(0x91F2, 0x02F5),	 # PLL_MODLUT0_CFG5 (for f_illu = 80.32 MHz [f_mod = 321.28 MHz])
	(0x91F3, 0x0009),	 # PLL_MODLUT0_CFG6 (for f_illu = 80.32 MHz [f_mod = 321.28 MHz])
	(0x91F4, 0x0039),	 # PLL_MODLUT0_CFG7 (for f_illu = 80.32 MHz [f_mod = 321.28 MHz])
	(0x91F5, 0x16A1),	 # PLL_MODLUT1_CFG0 (for f_illu = 60.24 MHz [f_mod = 240.96 MHz])
	(0x91F6, 0x1EB8),	 # PLL_MODLUT1_CFG1 (for f_illu = 60.24 MHz [f_mod = 240.96 MHz])
	(0x91F7, 0x0005),	 # PLL_MODLUT1_CFG2 (for f_illu = 60.24 MHz [f_mod = 240.96 MHz])
	(0x91F8, 0x3F01),	 # PLL_MODLUT1_CFG3 (for f_illu = 60.24 MHz [f_mod = 240.96 MHz])
	(0x91F9, 0xFCBF),	 # PLL_MODLUT1_CFG4 (for f_illu = 60.24 MHz [f_mod = 240.96 MHz])
	(0x91FA, 0x04A7),	 # PLL_MODLUT1_CFG5 (for f_illu = 60.24 MHz [f_mod = 240.96 MHz])
	(0x91FB, 0x000D),	 # PLL_MODLUT1_CFG6 (for f_illu = 60.24 MHz [f_mod = 240.96 MHz])
	(0x91FC, 0x002A),	 # PLL_MODLUT1_CFG7 (for f_illu = 60.24 MHz [f_mod = 240.96 MHz])
	(0x9223, 0x0003),	 # SENSOR_LENGHT_CODE0 (length = 4)
	(0x9224, 0x000C),	 # SENSOR_CODE0_0 (code = 1100)
	(0x9247, 0x0003),	 # ILLU_LENGHT_CODE0 (length = 4)
	(0x9248, 0x0008),	 # ILLU_CODE0_0 (code = 1000)
	(0x926B, 0x0001),	 # DIGCLKDIV_S0_PLL0 (for f_illu = 80.32 MHz [f_mod = 321.28 MHz])
	(0x926C, 0x0001),	 # DIGCLKDIV_S0_PLL1 (for f_illu = 60.24 MHz [f_mod = 240.96 MHz])
	(0x927B, 0x0B01),	 # DLLREGDELAY_S0_PLL0 (for f_illu = 80.32 MHz [f_mod = 321.28 MHz])
	(0x927C, 0x0001),	 # DLLREGDELAY_S0_PLL1 (for f_illu = 60.24 MHz [f_mod = 240.96 MHz])
	(0x928B, 0x023F),	 # Filter Stage initializaiton Value 611
	(0x928C, 0x024A),	 # Filter Stage initializaiton Value 610
	(0x928D, 0x024A),	 # Filter Stage initializaiton Value 69
	(0x928E, 0x023F),	 # Filter Stage initializaiton Value 68
	(0x928F, 0x024A),	 # Filter Stage initializaiton Value 67
	(0x9290, 0x023F),	 # Filter Stage initializaiton Value 66
	(0x9291, 0x024A),	 # Filter Stage initializaiton Value 65
	(0x9292, 0x023F),	 # Filter Stage initializaiton Value 64
	(0x9293, 0x024A),	 # Filter Stage initializaiton Value 63
	(0x9294, 0x023F),	 # Filter Stage initializaiton Value 62
	(0x9295, 0x024A),	 # Filter Stage initializaiton Value 61
	(0x9296, 0x024A),	 # Filter Stage initializaiton Value 60
	(0x9297, 0x012A),	 # Filter Stage initializaiton Value 57
	(0x9298, 0x012A),	 # Filter Stage initializaiton Value 56
	(0x9299, 0x0100),	 # Filter Stage initializaiton Value 55
	(0x929A, 0x012A),	 # Filter Stage initializaiton Value 54
	(0x929B, 0x012A),	 # Filter Stage initializaiton Value 53
	(0x929C, 0x012A),	 # Filter Stage initializaiton Value 52
	(0x929D, 0x012A),	 # Filter Stage initializaiton Value 51
	(0x929E, 0x0100),	 # Filter Stage initializaiton Value 50
	(0x929F, 0x0080),	 # Filter Stage initializaiton Value 47
	(0x92A0, 0x0080),	 # Filter Stage initializaiton Value 46
	(0x92A1, 0x0080),	 # Filter Stage initializaiton Value 45
	(0x92A2, 0x0080),	 # Filter Stage initializaiton Value 44
	(0x92A3, 0x0080),	 # Filter Stage initializaiton Value 43
	(0x92A4, 0x0080),	 # Filter Stage initializaiton Value 42
	(0x92A5, 0x0080),	 # Filter Stage initializaiton Value 41
	(0x92A6, 0x0080),	 # Filter Stage initializaiton Value 40
	(0x92A7, 0x0040),	 # Filter Stage initializaiton Value 37
	(0x92A8, 0x0040),	 # Filter Stage initializaiton Value 36
	(0x92A9, 0x0040),	 # Filter Stage initializaiton Value 35
	(0x92AA, 0x0040),	 # Filter Stage initializaiton Value 34
	(0x92AB, 0x0040),	 # Filter Stage initializaiton Value 33
	(0x92AC, 0x0040),	 # Filter Stage initializaiton Value 32
	(0x92AD, 0x0040),	 # Filter Stage initializaiton Value 31
	(0x92AE, 0x0040),	 # Filter Stage initializaiton Value 30
	(0x92AF, 0x0040),	 # Filter Stage initializaiton Value 27
	(0x92B0, 0x0040),	 # Filter Stage initializaiton Value 26
	(0x92B1, 0x0040),	 # Filter Stage initializaiton Value 25
	(0x92B2, 0x0040),	 # Filter Stage initializaiton Value 24
	(0x92B3, 0x0040),	 # Filter Stage initializaiton Value 23
	(0x92B4, 0x0040),	 # Filter Stage initializaiton Value 22
	(0x92B5, 0x0040),	 # Filter Stage initializaiton Value 21
	(0x92B6, 0x0040),	 # Filter Stage initializaiton Value 20
	(0x92B7, 0x0040),	 # Filter Stage initializaiton Value 17
	(0x92B8, 0x0040),	 # Filter Stage initializaiton Value 16
	(0x92B9, 0x0040),	 # Filter Stage initializaiton Value 15
	(0x92BA, 0x0040),	 # Filter Stage initializaiton Value 14
	(0x92BB, 0x0040),	 # Filter Stage initializaiton Value 13
	(0x92BC, 0x0040),	 # Filter Stage initializaiton Value 12
	(0x92BD, 0x0040),	 # Filter Stage initializaiton Value 11
	(0x92BE, 0x0040),	 # Filter Stage initializaiton Value 10
	(0x92BF, 0x0040),	 # Filter Stage initializaiton Value 07
	(0x92C0, 0x0040),	 # Filter Stage initializaiton Value 06
	(0x92C1, 0x0040),	 # Filter Stage initializaiton Value 05
	(0x92C2, 0x0040),	 # Filter Stage initializaiton Value 04
	(0x92C3, 0x0040),	 # Filter Stage initializaiton Value 03
	(0x92C4, 0x0040),	 # Filter Stage initializaiton Value 02
	(0x92C5, 0x0040),	 # Filter Stage initializaiton Value 01
	(0x92C6, 0x0040),	 # Filter Stage initializaiton Value 00
	(0x92C7, 0x8C53),	 # TH0
	(0x92C8, 0xABAB),	 # TH1
	(0x92C9, 0xABAB),	 # TH2
	(0x92CA, 0xABAB),	 # TH3
	(0x92CB, 0x7254),	 # TH4
	(0x92CC, 0xA88E),	 # TH5
	(0x92CD, 0xDAC1),	 # TH6
	(0x92CE, 0x00F1),	 # TH7
	(0x92CF, 0x4533),	 # TH8
	(0x92D0, 0x6656),	 # TH9
	(0x92D1, 0x8475),	 # TH10
	(0x92D2, 0x0092),	 # TH11
	(0x92D3, 0x2A1F),	 # TH12
	(0x92D4, 0x2C2B),	 # TH13
	(0x92D5, 0x2E2D),	 # TH14
	(0x92D6, 0x002F),	 # TH15
	(0x92D7, 0x3F37),	 # TH16
	(0x92D8, 0x4F47),	 # TH17
	(0x92D9, 0x5F57),	 # TH18
	(0x92DA, 0x0067),	 # TH19
	(0x92DB, 0x4630),	 # TH20
	(0x92DC, 0x715C),	 # TH21
	(0x92DD, 0x9581),	 # TH22
	(0x92DE, 0x00AA),	 # TH23
	(0x92DF, 0x3B28),	 # TH24
	(0x92E0, 0x604E),	 # TH25
	(0x92E1, 0x8170),	 # TH26
	(0x92E2, 0xA593),	 # TH27
	(0x92E3, 0xCAB8),	 # TH28
	(0x92E4, 0x00DC),	 # TH29
	(0x92E5, 0x1500),	 # CMPMUX
	(0x92E6, 0x0922),	 # HH
	(0x92E7, 0x08AA),	 # HL
	(0x92E8, 0x0853),	 # LH
	(0x92E9, 0x082C),	 # LL
	(0x92EA, 0x0001),	 # EYE_CFG (Eye Safety Idle Mode not allowed for A11!)
	(0x92EB, 0x0271),	 # Idle Counter
	(0x92EC, 0xFFFF),	 # Module ID 0
	(0x92ED, 0xFFFF),	 # Module ID 1
	(0x92EE, 0xFFFF),	 # Module ID 2
	(0x92EF, 0xFFFF),	 # Module ID 3
	(0x92F0, 0x0000),	 # Module ID 4
	(0x92F1, 0x0000),	 # Module ID 5
	(0x92F2, 0x0000),	 # Module ID 6
	(0x92F3, 0x0022),	 # Module ID 7
	(0x92F4, 0x2C02),	 # CRC
	(0x9401, 0x0002),	 # Mode
	(0xA001, 0x0007),	 # DMUX1
	(0xA008, 0x1513),	 # PADGPIOCFG1
	(0xA039, 0x16A1),	 # PLL_SYSLUT_CFG0 (for fref = 24.00 MHz)
	(0xA03A, 0x5555),	 # PLL_SYSLUT_CFG1 (for fref = 24.00 MHz)
	(0xA03B, 0x0005),	 # PLL_SYSLUT_CFG2 (for fref = 24.00 MHz)
	(0xA03C, 0x0000),	 # PLL_SYSLUT_CFG3 (for fref = 24.00 MHz)
	(0xA03D, 0x04D0),	 # PLL_SYSLUT_CFG4 (for fref = 24.00 MHz)
	(0xA03E, 0x0000),	 # PLL_SYSLUT_CFG5 (for fref = 24.00 MHz)
	(0xA03F, 0x000F),	 # PLL_SYSLUT_CFG6 (for fref = 24.00 MHz)
]