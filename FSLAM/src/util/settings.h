#pragma once

#include <string.h>
#include <string>
#include <cmath>
#include "DBoW3/Vocabulary.h"

namespace HSLAM
{

    extern bool Pause; //not a good idea:)
    extern bool LoopClosure;
    extern int gridSize;
    extern int mnGridCols, mnGridRows;
    extern float mnMinX, mnMaxX, mnMinY, mnMaxY, mfGridElementWidthInv, mfGridElementHeightInv;
    extern int EDGE_THRESHOLD;

    extern int minThFAST;
    extern int minIndDist;
    extern int minDirDist;
    extern int indFeaturesToExtract;

    extern int minKfIdDist_LoopCandidate;
    extern int kfGap;
    extern int mnCovisibilityConsistencyTh;


    extern bool normalizeInfoWithVariance;

#define SOLVER_SVD (int)1
#define SOLVER_ORTHOGONALIZE_SYSTEM (int)2
#define SOLVER_ORTHOGONALIZE_POINTMARG (int)4
#define SOLVER_ORTHOGONALIZE_FULL (int)8
#define SOLVER_SVD_CUT7 (int)16
#define SOLVER_REMOVE_POSEPRIOR (int)32
#define SOLVER_USE_GN (int)64
#define SOLVER_FIX_LAMBDA (int)128
#define SOLVER_ORTHOGONALIZE_X (int)256
#define SOLVER_MOMENTUM (int)512
#define SOLVER_STEPMOMENTUM (int)1024
#define SOLVER_ORTHOGONALIZE_X_LATER (int)2048


// ============== PARAMETERS TO BE DECIDED ON COMPILE TIME =================
#define PYR_LEVELS 6
extern int pyrLevelsUsed;



extern float setting_keyframesPerSecond;
extern bool setting_realTimeMaxKF;
extern float setting_maxShiftWeightT;
extern float setting_maxShiftWeightR;
extern float setting_maxShiftWeightRT;
extern float setting_maxAffineWeight;
extern float setting_kfGlobalWeight;



extern float setting_idepthFixPrior;
extern float setting_idepthFixPriorMargFac;
extern float setting_initialRotPrior;
extern float setting_initialTransPrior;
extern float setting_initialAffBPrior;
extern float setting_initialAffAPrior;
extern float setting_initialCalibHessian;

extern int setting_solverMode;
extern double setting_solverModeDelta;


extern float setting_minIdepthH_act;
extern float setting_minIdepthH_marg;



extern float setting_maxIdepth;
extern float setting_maxPixSearch;
extern float setting_desiredImmatureDensity;			// done
extern float setting_desiredPointDensity;			// done
extern float setting_minPointsRemaining;
extern float setting_maxLogAffFacInWindow;
extern int setting_minFrames;
extern int setting_maxFrames;
extern int setting_minFrameAge;
extern int setting_maxOptIterations;
extern int setting_minOptIterations;
extern float setting_thOptIterations;
extern float setting_outlierTH;
extern float setting_outlierTHSumComponent;



extern int setting_pattern;
extern float setting_margWeightFac;
extern int setting_GNItsOnPointActivation;


extern float setting_minTraceQuality;
extern int setting_minTraceTestRadius;
extern float setting_reTrackThreshold;


extern int   setting_minGoodActiveResForMarg;
extern int   setting_minGoodResForMarg;
extern int   setting_minInlierVotesForMarg;




extern int setting_photometricCalibration;
extern bool setting_useExposure;
extern float setting_affineOptModeA;
extern float setting_affineOptModeB;
extern int setting_gammaWeightsPixelSelect;



extern bool setting_forceAceptStep;



extern float setting_huberTH;
extern float setting_huberTH_Ind;

extern bool setting_logStuff;
extern float benchmarkSetting_fxfyfac;
extern int benchmarkSetting_width;
extern int benchmarkSetting_height;
extern float benchmark_varNoise;
extern float benchmark_varBlurNoise;
extern int benchmark_noiseGridsize;
extern float benchmark_initializerSlackFactor;

extern float setting_frameEnergyTHConstWeight;
extern float setting_frameEnergyTHN;

extern float setting_frameEnergyTHFacMedian;
extern float setting_overallEnergyTHWeight;
extern float setting_coarseCutoffTH;

extern float setting_minGradHistCut;
extern float setting_minGradHistAdd;
extern float setting_gradDownweightPerLevel;
extern bool  setting_selectDirectionDistribution;



extern float setting_trace_stepsize;
extern int setting_trace_GNIterations;
extern float setting_trace_GNThreshold;
extern float setting_trace_extraSlackOnTH;
extern float setting_trace_slackInterval;
extern float setting_trace_minImprovementFactor;


extern bool setting_render_displayCoarseTrackingFull;
extern bool setting_render_renderWindowFrames;
extern bool setting_render_plotTrackingFull;


extern bool setting_fullResetRequested;

extern bool setting_debugout_runquiet;

extern bool disableAllDisplay;
extern bool outputPC;
extern bool disableReconfigure;


extern bool setting_onlyLogKFPoses;




extern bool debugSaveImages;


extern int sparsityFactor;
extern bool goStepByStep;
extern bool plotStereoImages;
extern bool multiThreading;

extern float freeDebugParam1;
extern float freeDebugParam2;
extern float freeDebugParam3;
extern float freeDebugParam4;
extern float freeDebugParam5;


void handleKey(char k);
void set_frame_sz(int size_x, int size_y);




extern int staticPattern[10][40][2];
extern int staticPatternNum[10];
extern int staticPatternPadding[10];




//#define PATTERNNUM staticPatternNum[setting_pattern]
//#define PATTERNP staticPattern[setting_pattern]
//#define PATTERNPADDING staticPatternPadding[setting_pattern]

//
#define PATTERNNUM 8
#define PATTERNP staticPattern[8]
#define PATTERNPADDING 2













}
