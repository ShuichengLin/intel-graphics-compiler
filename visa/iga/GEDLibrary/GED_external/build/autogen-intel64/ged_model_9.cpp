/*========================== begin_copyright_notice ============================

Copyright (C) 2017-2021 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

/*
 * !!! DO NOT EDIT THIS FILE !!!
 *
 * This file was automagically crafted by GED's model parser.
 */

#include "xcoder/ged_internal_api.h"
#include "ged_decoding_tables.h"
#include "ged_mapping_tables.h"
#include "ged_encoding_masks_tables.h"
#include "ged_model_9.h"

namespace GED_MODEL_NS_9
{

/*!
 * Top level decoding table in the decoding chain for the format flowControlBrc.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlBrcDecoding = DecodingTable560;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControlBrc.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlBrcEncodingMasks = EncodingMasksTable63;

/*!
 * Top level decoding table in the decoding chain for the format flowControlBrd.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlBrdDecoding = DecodingTable561;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControlBrd.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlBrdEncodingMasks = EncodingMasksTable64;

/*!
 * Top level decoding table in the decoding chain for the format flowControlCall.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlCallDecoding = DecodingTable562;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControlCall.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlCallEncodingMasks = EncodingMasksTable62;

/*!
 * Top level decoding table in the decoding chain for the format flowControlJmpi.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlJmpiDecoding = DecodingTable563;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControlJmpi.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlJmpiEncodingMasks = EncodingMasksTable65;

/*!
 * Top level decoding table in the decoding chain for the format flowControlJmpiCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlJmpiCompactDecoding = DecodingTable538;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControlJmpiCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlJmpiCompactEncodingMasks = EncodingMasksTable33;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format flowControlJmpiCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t flowControlJmpiCompactMapping = MappingTable36;

/*!
 * Top level decoding table in the decoding chain for the format flowControlNoUIP.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlNoUIPDecoding = DecodingTable564;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControlNoUIP.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlNoUIPEncodingMasks = EncodingMasksTable61;

/*!
 * Top level decoding table in the decoding chain for the format flowControlWithBranchCtrl.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlWithBranchCtrlDecoding = DecodingTable565;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControlWithBranchCtrl.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlWithBranchCtrlEncodingMasks = EncodingMasksTable60;

/*!
 * Top level decoding table in the decoding chain for the format flowControlWithUIP.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlWithUIPDecoding = DecodingTable566;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControlWithUIP.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlWithUIPEncodingMasks = EncodingMasksTable60;

/*!
 * Top level decoding table in the decoding chain for the format illegal.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t illegalDecoding = DecodingTable541;

/*!
 * Top level encoding masks table in the encoding chain for the format illegal.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t illegalEncodingMasks = EncodingMasksTable10;

/*!
 * Top level decoding table in the decoding chain for the format math.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t mathDecoding = DecodingTable567;

/*!
 * Top level encoding masks table in the encoding chain for the format math.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t mathEncodingMasks = EncodingMasksTable59;

/*!
 * Top level decoding table in the decoding chain for the format mathCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t mathCompactDecoding = DecodingTable568;

/*!
 * Top level encoding masks table in the encoding chain for the format mathCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t mathCompactEncodingMasks = EncodingMasksTable32;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format mathCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t mathCompactMapping = MappingTable37;

/*!
 * Top level decoding table in the decoding chain for the format nop.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t nopDecoding = DecodingTable544;

/*!
 * Top level encoding masks table in the encoding chain for the format nop.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t nopEncodingMasks = EncodingMasksTable11;

/*!
 * Top level decoding table in the decoding chain for the format oneSourceCommon.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t oneSourceCommonDecoding = DecodingTable569;

/*!
 * Top level encoding masks table in the encoding chain for the format oneSourceCommon.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t oneSourceCommonEncodingMasks = EncodingMasksTable51;

/*!
 * Top level decoding table in the decoding chain for the format oneSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t oneSourceCompactDecoding = DecodingTable546;

/*!
 * Top level encoding masks table in the encoding chain for the format oneSourceCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t oneSourceCompactEncodingMasks = EncodingMasksTable32;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format oneSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t oneSourceCompactMapping = MappingTable38;

/*!
 * Top level decoding table in the decoding chain for the format send.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t sendDecoding = DecodingTable579;

/*!
 * Top level encoding masks table in the encoding chain for the format send.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t sendEncodingMasks = EncodingMasksTable70;

/*!
 * Top level decoding table in the decoding chain for the format sends.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t sendsDecoding = DecodingTable580;

/*!
 * Top level encoding masks table in the encoding chain for the format sends.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t sendsEncodingMasks = EncodingMasksTable75;

/*!
 * Top level decoding table in the decoding chain for the format threeSource.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t threeSourceDecoding = DecodingTable577;

/*!
 * Top level encoding masks table in the encoding chain for the format threeSource.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t threeSourceEncodingMasks = EncodingMasksTable68;

/*!
 * Top level decoding table in the decoding chain for the format threeSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t threeSourceCompactDecoding = DecodingTable572;

/*!
 * Top level encoding masks table in the encoding chain for the format threeSourceCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t threeSourceCompactEncodingMasks = EncodingMasksTable66;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format threeSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t threeSourceCompactMapping = MappingTable42;

/*!
 * Top level decoding table in the decoding chain for the format threeSourceMacro.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t threeSourceMacroDecoding = DecodingTable578;

/*!
 * Top level encoding masks table in the encoding chain for the format threeSourceMacro.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t threeSourceMacroEncodingMasks = EncodingMasksTable68;

/*!
 * Top level decoding table in the decoding chain for the format twoSourceCommon.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t twoSourceCommonDecoding = DecodingTable574;

/*!
 * Top level encoding masks table in the encoding chain for the format twoSourceCommon.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t twoSourceCommonEncodingMasks = EncodingMasksTable46;

/*!
 * Top level decoding table in the decoding chain for the format twoSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t twoSourceCompactDecoding = DecodingTable546;

/*!
 * Top level encoding masks table in the encoding chain for the format twoSourceCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t twoSourceCompactEncodingMasks = EncodingMasksTable32;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format twoSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t twoSourceCompactMapping = MappingTable41;

/*!
 * Top level decoding table in the decoding chain for the format wait.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t waitDecoding = DecodingTable575;

/*!
 * Top level encoding masks table in the encoding chain for the format wait.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t waitEncodingMasks = EncodingMasksTable51;

/*!
 * Top level decoding table in the decoding chain for the format waitCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t waitCompactDecoding = DecodingTable546;

/*!
 * Top level encoding masks table in the encoding chain for the format waitCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t waitCompactEncodingMasks = EncodingMasksTable32;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format waitCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t waitCompactMapping = MappingTable38;
OpcodeTables Opcodes[128] =
{
    illegalDecoding, illegalEncodingMasks, NULL, NULL, NULL, // 0
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 1
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 2
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 3
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 4
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 5
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 6
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 7
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 8
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 9
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 10
    NULL, NULL, NULL, NULL, NULL, // 11
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 12
    NULL, NULL, NULL, NULL, NULL, // 13
    NULL, NULL, NULL, NULL, NULL, // 14
    NULL, NULL, NULL, NULL, NULL, // 15
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 16
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 17
    threeSourceDecoding, threeSourceEncodingMasks, threeSourceCompactDecoding, threeSourceCompactEncodingMasks, threeSourceCompactMapping, // 18
    NULL, NULL, NULL, NULL, NULL, // 19
    NULL, NULL, NULL, NULL, NULL, // 20
    NULL, NULL, NULL, NULL, NULL, // 21
    NULL, NULL, NULL, NULL, NULL, // 22
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 23
    threeSourceDecoding, threeSourceEncodingMasks, threeSourceCompactDecoding, threeSourceCompactEncodingMasks, threeSourceCompactMapping, // 24
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 25
    threeSourceDecoding, threeSourceEncodingMasks, threeSourceCompactDecoding, threeSourceCompactEncodingMasks, threeSourceCompactMapping, // 26
    NULL, NULL, NULL, NULL, NULL, // 27
    NULL, NULL, NULL, NULL, NULL, // 28
    NULL, NULL, NULL, NULL, NULL, // 29
    NULL, NULL, NULL, NULL, NULL, // 30
    NULL, NULL, NULL, NULL, NULL, // 31
    flowControlJmpiDecoding, flowControlJmpiEncodingMasks, flowControlJmpiCompactDecoding, flowControlJmpiCompactEncodingMasks, flowControlJmpiCompactMapping, // 32
    flowControlBrdDecoding, flowControlBrdEncodingMasks, NULL, NULL, NULL, // 33
    flowControlWithBranchCtrlDecoding, flowControlWithBranchCtrlEncodingMasks, NULL, NULL, NULL, // 34
    flowControlBrcDecoding, flowControlBrcEncodingMasks, NULL, NULL, NULL, // 35
    flowControlWithBranchCtrlDecoding, flowControlWithBranchCtrlEncodingMasks, NULL, NULL, NULL, // 36
    flowControlNoUIPDecoding, flowControlNoUIPEncodingMasks, NULL, NULL, NULL, // 37
    NULL, NULL, NULL, NULL, NULL, // 38
    flowControlNoUIPDecoding, flowControlNoUIPEncodingMasks, NULL, NULL, NULL, // 39
    flowControlWithUIPDecoding, flowControlWithUIPEncodingMasks, NULL, NULL, NULL, // 40
    flowControlWithUIPDecoding, flowControlWithUIPEncodingMasks, NULL, NULL, NULL, // 41
    flowControlWithUIPDecoding, flowControlWithUIPEncodingMasks, NULL, NULL, NULL, // 42
    flowControlCallDecoding, flowControlCallEncodingMasks, NULL, NULL, NULL, // 43
    flowControlCallDecoding, flowControlCallEncodingMasks, NULL, NULL, NULL, // 44
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 45
    flowControlWithBranchCtrlDecoding, flowControlWithBranchCtrlEncodingMasks, NULL, NULL, NULL, // 46
    flowControlNoUIPDecoding, flowControlNoUIPEncodingMasks, NULL, NULL, NULL, // 47
    waitDecoding, waitEncodingMasks, waitCompactDecoding, waitCompactEncodingMasks, waitCompactMapping, // 48
    sendDecoding, sendEncodingMasks, NULL, NULL, NULL, // 49
    sendDecoding, sendEncodingMasks, NULL, NULL, NULL, // 50
    sendsDecoding, sendsEncodingMasks, NULL, NULL, NULL, // 51
    sendsDecoding, sendsEncodingMasks, NULL, NULL, NULL, // 52
    NULL, NULL, NULL, NULL, NULL, // 53
    NULL, NULL, NULL, NULL, NULL, // 54
    NULL, NULL, NULL, NULL, NULL, // 55
    mathDecoding, mathEncodingMasks, mathCompactDecoding, mathCompactEncodingMasks, mathCompactMapping, // 56
    NULL, NULL, NULL, NULL, NULL, // 57
    NULL, NULL, NULL, NULL, NULL, // 58
    NULL, NULL, NULL, NULL, NULL, // 59
    NULL, NULL, NULL, NULL, NULL, // 60
    NULL, NULL, NULL, NULL, NULL, // 61
    NULL, NULL, NULL, NULL, NULL, // 62
    NULL, NULL, NULL, NULL, NULL, // 63
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 64
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 65
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 66
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 67
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 68
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 69
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 70
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 71
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 72
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 73
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 74
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 75
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 76
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 77
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 78
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 79
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 80
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 81
    NULL, NULL, NULL, NULL, NULL, // 82
    NULL, NULL, NULL, NULL, NULL, // 83
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 84
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 85
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 86
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 87
    NULL, NULL, NULL, NULL, NULL, // 88
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 89
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 90
    threeSourceDecoding, threeSourceEncodingMasks, threeSourceCompactDecoding, threeSourceCompactEncodingMasks, threeSourceCompactMapping, // 91
    threeSourceDecoding, threeSourceEncodingMasks, threeSourceCompactDecoding, threeSourceCompactEncodingMasks, threeSourceCompactMapping, // 92
    threeSourceMacroDecoding, threeSourceMacroEncodingMasks, threeSourceCompactDecoding, threeSourceCompactEncodingMasks, threeSourceCompactMapping, // 93
    NULL, NULL, NULL, NULL, NULL, // 94
    NULL, NULL, NULL, NULL, NULL, // 95
    NULL, NULL, NULL, NULL, NULL, // 96
    NULL, NULL, NULL, NULL, NULL, // 97
    NULL, NULL, NULL, NULL, NULL, // 98
    NULL, NULL, NULL, NULL, NULL, // 99
    NULL, NULL, NULL, NULL, NULL, // 100
    NULL, NULL, NULL, NULL, NULL, // 101
    NULL, NULL, NULL, NULL, NULL, // 102
    NULL, NULL, NULL, NULL, NULL, // 103
    NULL, NULL, NULL, NULL, NULL, // 104
    NULL, NULL, NULL, NULL, NULL, // 105
    NULL, NULL, NULL, NULL, NULL, // 106
    NULL, NULL, NULL, NULL, NULL, // 107
    NULL, NULL, NULL, NULL, NULL, // 108
    NULL, NULL, NULL, NULL, NULL, // 109
    NULL, NULL, NULL, NULL, NULL, // 110
    NULL, NULL, NULL, NULL, NULL, // 111
    NULL, NULL, NULL, NULL, NULL, // 112
    NULL, NULL, NULL, NULL, NULL, // 113
    NULL, NULL, NULL, NULL, NULL, // 114
    NULL, NULL, NULL, NULL, NULL, // 115
    NULL, NULL, NULL, NULL, NULL, // 116
    NULL, NULL, NULL, NULL, NULL, // 117
    NULL, NULL, NULL, NULL, NULL, // 118
    NULL, NULL, NULL, NULL, NULL, // 119
    NULL, NULL, NULL, NULL, NULL, // 120
    NULL, NULL, NULL, NULL, NULL, // 121
    NULL, NULL, NULL, NULL, NULL, // 122
    NULL, NULL, NULL, NULL, NULL, // 123
    NULL, NULL, NULL, NULL, NULL, // 124
    NULL, NULL, NULL, NULL, NULL, // 125
    nopDecoding, nopEncodingMasks, NULL, NULL, NULL, // 126
    NULL, NULL, NULL, NULL, NULL // 127
}; // Opcodes[]
} // namespace GED_MODEL_NS_9
