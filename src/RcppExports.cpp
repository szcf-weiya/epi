// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// DetectEpi
Rcpp::List DetectEpi(SEXP inputfile_X, SEXP inputfile_Y, SEXP inputfile_COV, int MAX_ROW, int MAX_COL, bool IS_EXIST_COV);
RcppExport SEXP _depi_DetectEpi(SEXP inputfile_XSEXP, SEXP inputfile_YSEXP, SEXP inputfile_COVSEXP, SEXP MAX_ROWSEXP, SEXP MAX_COLSEXP, SEXP IS_EXIST_COVSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inputfile_X(inputfile_XSEXP);
    Rcpp::traits::input_parameter< SEXP >::type inputfile_Y(inputfile_YSEXP);
    Rcpp::traits::input_parameter< SEXP >::type inputfile_COV(inputfile_COVSEXP);
    Rcpp::traits::input_parameter< int >::type MAX_ROW(MAX_ROWSEXP);
    Rcpp::traits::input_parameter< int >::type MAX_COL(MAX_COLSEXP);
    Rcpp::traits::input_parameter< bool >::type IS_EXIST_COV(IS_EXIST_COVSEXP);
    rcpp_result_gen = Rcpp::wrap(DetectEpi(inputfile_X, inputfile_Y, inputfile_COV, MAX_ROW, MAX_COL, IS_EXIST_COV));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello
List rcpp_hello();
RcppExport SEXP _depi_rcpp_hello() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_depi_DetectEpi", (DL_FUNC) &_depi_DetectEpi, 6},
    {"_depi_rcpp_hello", (DL_FUNC) &_depi_rcpp_hello, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_depi(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}