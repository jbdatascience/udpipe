// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// udp_load_model
SEXP udp_load_model(const char* file_model);
RcppExport SEXP _udpipe_udp_load_model(SEXP file_modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type file_model(file_modelSEXP);
    rcpp_result_gen = Rcpp::wrap(udp_load_model(file_model));
    return rcpp_result_gen;
END_RCPP
}
// udp_tokenise_tag_parse
List udp_tokenise_tag_parse(SEXP udmodel, Rcpp::StringVector x, Rcpp::StringVector docid);
RcppExport SEXP _udpipe_udp_tokenise_tag_parse(SEXP udmodelSEXP, SEXP xSEXP, SEXP docidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type udmodel(udmodelSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type docid(docidSEXP);
    rcpp_result_gen = Rcpp::wrap(udp_tokenise_tag_parse(udmodel, x, docid));
    return rcpp_result_gen;
END_RCPP
}
// na_locf
Rcpp::CharacterVector na_locf(Rcpp::CharacterVector x);
RcppExport SEXP _udpipe_na_locf(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(na_locf(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_udpipe_udp_load_model", (DL_FUNC) &_udpipe_udp_load_model, 1},
    {"_udpipe_udp_tokenise_tag_parse", (DL_FUNC) &_udpipe_udp_tokenise_tag_parse, 3},
    {"_udpipe_na_locf", (DL_FUNC) &_udpipe_na_locf, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_udpipe(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
