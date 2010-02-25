int     AddToPrintString (char *tempStr);
void    AutotuneDirichlet (MrBFlt acceptanceRate, MrBFlt targetRate, int batch, MrBFlt *alphaPi);
void    AutotuneMultiplier (MrBFlt acceptanceRate, MrBFlt targetRate, int batch, MrBFlt *lambda);
void    AutotuneSlider (MrBFlt acceptanceRate, MrBFlt targetRate, int batch, MrBFlt *width);
int	    DoMcmc (void);
int	    DoMcmcp (void);
int	    DoMcmcParm (char *parmName, char *tkn);
int     Move_Aamodel (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Adgamma (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int	    Move_AddDeleteCPPEvent (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Beta (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Beta_M (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int	    Move_BmBranchRate (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_BrLen (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int	    Move_CPPEventPosition (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int	    Move_CPPRate (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int	    Move_CPPPsiGammaAlpha (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int	    Move_CPPRateMultiplierMult (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int	    Move_CPPRateMultiplierRnd (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Extinction (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Extinction_M (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_ExtSPR1 (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_ExtSPR2 (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_ExtSPRClock (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_ExtSS (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_ExtSSClock (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_ExtTBR (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_ExtTBR1 (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_ExtTBR2 (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_ExtTBR3 (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_ExtTBR4 (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_GammaShape_M (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Growth (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_IbrShape (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_IbrBranchRate (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Local (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_LocalClock (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_NNI (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_NNIClock (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int	    Move_NNI_Hetero (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int	    Move_NodeSlider (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int	    Move_NodeSliderClock (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int	    Move_Nu (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Omega (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Omega_M (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_OmegaBeta_M (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_OmegaCat (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_OmegaGamma_M (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_OmegaM3 (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_OmegaNeu (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_OmegaPos (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_OmegaPur (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_ParsEraser1 (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_ParsSPR (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_ParsSPRClock (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Pinvar (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_RanSPR1 (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_RanSPR2 (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_RanSPR3 (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_RanSPR4 (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_RateMult_Dir (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Revmat_Dir (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Revmat_Slider (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Speciation (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Speciation_M (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_SPRClock (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Statefreqs (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Statefreqs_Slider (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_StatefreqsSymDirMultistate (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_SwitchRate (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_SwitchRate_M (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Theta (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_Tratio_Dir (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_TreeAgeM (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_TreeHeight (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_TreeHeightM (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
int     Move_UnrootedSlider (Param *param, int chain, safeLong *seed, MrBFlt *lnPriorRatio, MrBFlt *lnProposalRatio, MrBFlt *mvp);
FILE	*OpenNewMBPrintFile (char *fileName);
int     SafeSprintf (char **target, int *targetLen, char *fmt, ...);