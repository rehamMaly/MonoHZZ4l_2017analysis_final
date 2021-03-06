{
  TString LIBCOLLIER="libcollier.so";
  TString LIBMCFM="libmcfm_705.so";

  gSystem->AddIncludePath("-I$ROOFITSYS/include/");
  gSystem->AddIncludePath("-I$CMSSW_BASE/interface/");
  gSystem->AddIncludePath("-I$CMSSW_BASE/src/");
  gSystem->AddIncludePath("-I$CMSSW_BASE/src/ZZMatrixElement/MELA/interface/");
  gSystem->Load("$CMSSW_BASE/src/ZZMatrixElement/MELA/data/$SCRAM_ARCH/" + LIBCOLLIER);
  gSystem->Load("libZZMatrixElementMELA.so");
  gSystem->Load("$CMSSW_BASE/src/ZZMatrixElement/MELA/data/$SCRAM_ARCH/" + LIBMCFM);
}
