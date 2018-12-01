// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// calc_adapter_content
std::map<std::string, int> calc_adapter_content(std::string infile, std::string adapters);
RcppExport SEXP _qckitfastq_calc_adapter_content(SEXP infileSEXP, SEXP adaptersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type infile(infileSEXP);
    Rcpp::traits::input_parameter< std::string >::type adapters(adaptersSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_adapter_content(infile, adapters));
    return rcpp_result_gen;
END_RCPP
}
// find_format
std::string find_format(std::string infile, int reads_used);
RcppExport SEXP _qckitfastq_find_format(SEXP infileSEXP, SEXP reads_usedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type infile(infileSEXP);
    Rcpp::traits::input_parameter< int >::type reads_used(reads_usedSEXP);
    rcpp_result_gen = Rcpp::wrap(find_format(infile, reads_used));
    return rcpp_result_gen;
END_RCPP
}
// calc_format_score
int calc_format_score(char score, std::string score_format);
RcppExport SEXP _qckitfastq_calc_format_score(SEXP scoreSEXP, SEXP score_formatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< char >::type score(scoreSEXP);
    Rcpp::traits::input_parameter< std::string >::type score_format(score_formatSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_format_score(score, score_format));
    return rcpp_result_gen;
END_RCPP
}
// process_fastq
void process_fastq(std::string infile, int buffer_size);
RcppExport SEXP _qckitfastq_process_fastq(SEXP infileSEXP, SEXP buffer_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type infile(infileSEXP);
    Rcpp::traits::input_parameter< int >::type buffer_size(buffer_sizeSEXP);
    process_fastq(infile, buffer_size);
    return R_NilValue;
END_RCPP
}
// qual_score_per_read
Rcpp::List qual_score_per_read(std::string infile);
RcppExport SEXP _qckitfastq_qual_score_per_read(SEXP infileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type infile(infileSEXP);
    rcpp_result_gen = Rcpp::wrap(qual_score_per_read(infile));
    return rcpp_result_gen;
END_RCPP
}
// gc_per_read
Rcpp::NumericVector gc_per_read(std::string infile);
RcppExport SEXP _qckitfastq_gc_per_read(SEXP infileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type infile(infileSEXP);
    rcpp_result_gen = Rcpp::wrap(gc_per_read(infile));
    return rcpp_result_gen;
END_RCPP
}
// calc_over_rep_seq
std::map<std::string, int> calc_over_rep_seq(std::string infile, int min_size, int buffer_size);
RcppExport SEXP _qckitfastq_calc_over_rep_seq(SEXP infileSEXP, SEXP min_sizeSEXP, SEXP buffer_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type infile(infileSEXP);
    Rcpp::traits::input_parameter< int >::type min_size(min_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type buffer_size(buffer_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_over_rep_seq(infile, min_size, buffer_size));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_qckitfastq_calc_adapter_content", (DL_FUNC) &_qckitfastq_calc_adapter_content, 2},
    {"_qckitfastq_find_format", (DL_FUNC) &_qckitfastq_find_format, 2},
    {"_qckitfastq_calc_format_score", (DL_FUNC) &_qckitfastq_calc_format_score, 2},
    {"_qckitfastq_process_fastq", (DL_FUNC) &_qckitfastq_process_fastq, 2},
    {"_qckitfastq_qual_score_per_read", (DL_FUNC) &_qckitfastq_qual_score_per_read, 1},
    {"_qckitfastq_gc_per_read", (DL_FUNC) &_qckitfastq_gc_per_read, 1},
    {"_qckitfastq_calc_over_rep_seq", (DL_FUNC) &_qckitfastq_calc_over_rep_seq, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_qckitfastq(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
