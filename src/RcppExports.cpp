// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_new_optimization_problem
SEXP rcpp_new_optimization_problem(std::size_t nrow, std::size_t ncol, std::size_t ncell);
RcppExport SEXP _prioritizr_rcpp_new_optimization_problem(SEXP nrowSEXP, SEXP ncolSEXP, SEXP ncellSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type ncell(ncellSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_new_optimization_problem(nrow, ncol, ncell));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_predefined_optimization_problem
SEXP rcpp_predefined_optimization_problem(Rcpp::List l);
RcppExport SEXP _prioritizr_rcpp_predefined_optimization_problem(SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_predefined_optimization_problem(l));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_optimization_problem_as_list
Rcpp::List rcpp_optimization_problem_as_list(SEXP x);
RcppExport SEXP _prioritizr_rcpp_optimization_problem_as_list(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_optimization_problem_as_list(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_ncol
std::size_t rcpp_get_optimization_problem_ncol(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_ncol(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_ncol(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_nrow
std::size_t rcpp_get_optimization_problem_nrow(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_nrow(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_nrow(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_ncell
std::size_t rcpp_get_optimization_problem_ncell(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_ncell(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_ncell(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_A
Rcpp::List rcpp_get_optimization_problem_A(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_A(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_A(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_modelsense
std::string rcpp_get_optimization_problem_modelsense(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_modelsense(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_modelsense(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_number_of_planning_units
std::size_t rcpp_get_optimization_problem_number_of_planning_units(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_number_of_planning_units(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_number_of_planning_units(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_number_of_features
std::size_t rcpp_get_optimization_problem_number_of_features(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_number_of_features(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_number_of_features(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_number_of_zones
std::size_t rcpp_get_optimization_problem_number_of_zones(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_number_of_zones(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_number_of_zones(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_vtype
std::vector<std::string> rcpp_get_optimization_problem_vtype(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_vtype(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_vtype(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_obj
std::vector<double> rcpp_get_optimization_problem_obj(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_obj(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_obj(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_rhs
std::vector<double> rcpp_get_optimization_problem_rhs(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_rhs(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_rhs(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_sense
std::vector<std::string> rcpp_get_optimization_problem_sense(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_sense(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_sense(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_lb
std::vector<double> rcpp_get_optimization_problem_lb(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_lb(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_lb(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_ub
std::vector<double> rcpp_get_optimization_problem_ub(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_ub(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_ub(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_col_ids
std::vector<std::string> rcpp_get_optimization_problem_col_ids(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_col_ids(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_col_ids(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_row_ids
std::vector<std::string> rcpp_get_optimization_problem_row_ids(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_row_ids(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_row_ids(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_compressed_formulation
bool rcpp_get_optimization_problem_compressed_formulation(SEXP x);
RcppExport SEXP _prioritizr_rcpp_get_optimization_problem_compressed_formulation(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_compressed_formulation(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_set_optimization_problem_shuffled
Rcpp::IntegerVector rcpp_set_optimization_problem_shuffled(SEXP x);
RcppExport SEXP _prioritizr_rcpp_set_optimization_problem_shuffled(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_set_optimization_problem_shuffled(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_absolute_amount_held_by_solution
Rcpp::NumericVector rcpp_absolute_amount_held_by_solution(const Rcpp::List rij_list, const Rcpp::List targets_list, const Rcpp::NumericMatrix solution);
RcppExport SEXP _prioritizr_rcpp_absolute_amount_held_by_solution(SEXP rij_listSEXP, SEXP targets_listSEXP, SEXP solutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type rij_list(rij_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type targets_list(targets_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type solution(solutionSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_absolute_amount_held_by_solution(rij_list, targets_list, solution));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_linear_constraints
bool rcpp_apply_linear_constraints(SEXP x, double threshold, std::string sense, const arma::sp_mat data);
RcppExport SEXP _prioritizr_rcpp_apply_linear_constraints(SEXP xSEXP, SEXP thresholdSEXP, SEXP senseSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< std::string >::type sense(senseSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_linear_constraints(x, threshold, sense, data));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_add_rij_data
bool rcpp_add_rij_data(SEXP x, const Rcpp::List rij_list, const Rcpp::List targets_list, bool compressed_formulation);
RcppExport SEXP _prioritizr_rcpp_add_rij_data(SEXP xSEXP, SEXP rij_listSEXP, SEXP targets_listSEXP, SEXP compressed_formulationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type rij_list(rij_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type targets_list(targets_listSEXP);
    Rcpp::traits::input_parameter< bool >::type compressed_formulation(compressed_formulationSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_add_rij_data(x, rij_list, targets_list, compressed_formulation));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_add_zones_constraints
bool rcpp_add_zones_constraints(SEXP x, std::string sense);
RcppExport SEXP _prioritizr_rcpp_add_zones_constraints(SEXP xSEXP, SEXP senseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type sense(senseSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_add_zones_constraints(x, sense));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_asym_connectivity_penalties
bool rcpp_apply_asym_connectivity_penalties(SEXP x, double penalty, const Rcpp::List data);
RcppExport SEXP _prioritizr_rcpp_apply_asym_connectivity_penalties(SEXP xSEXP, SEXP penaltySEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_asym_connectivity_penalties(x, penalty, data));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_boundary_penalties
bool rcpp_apply_boundary_penalties(SEXP x, double penalty, const Rcpp::NumericVector edge_factor, const Rcpp::NumericMatrix zones_matrix, const arma::sp_mat boundary_matrix, const Rcpp::NumericVector exposed_boundary, const Rcpp::NumericVector total_boundary);
RcppExport SEXP _prioritizr_rcpp_apply_boundary_penalties(SEXP xSEXP, SEXP penaltySEXP, SEXP edge_factorSEXP, SEXP zones_matrixSEXP, SEXP boundary_matrixSEXP, SEXP exposed_boundarySEXP, SEXP total_boundarySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type edge_factor(edge_factorSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type zones_matrix(zones_matrixSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat >::type boundary_matrix(boundary_matrixSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type exposed_boundary(exposed_boundarySEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type total_boundary(total_boundarySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_boundary_penalties(x, penalty, edge_factor, zones_matrix, boundary_matrix, exposed_boundary, total_boundary));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_bounded_constraints
bool rcpp_apply_bounded_constraints(SEXP x, const Rcpp::IntegerVector pu, const Rcpp::IntegerVector zone, const Rcpp::NumericVector lower, const Rcpp::NumericVector upper);
RcppExport SEXP _prioritizr_rcpp_apply_bounded_constraints(SEXP xSEXP, SEXP puSEXP, SEXP zoneSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type pu(puSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type zone(zoneSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_bounded_constraints(x, pu, zone, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_connectivity_penalties
bool rcpp_apply_connectivity_penalties(SEXP x, double penalty, const Rcpp::List data);
RcppExport SEXP _prioritizr_rcpp_apply_connectivity_penalties(SEXP xSEXP, SEXP penaltySEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_connectivity_penalties(x, penalty, data));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_contiguity_constraints
bool rcpp_apply_contiguity_constraints(SEXP x, const arma::sp_mat data, const Rcpp::IntegerVector clusters);
RcppExport SEXP _prioritizr_rcpp_apply_contiguity_constraints(SEXP xSEXP, SEXP dataSEXP, SEXP clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type clusters(clustersSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_contiguity_constraints(x, data, clusters));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_decisions
bool rcpp_apply_decisions(SEXP x, std::string vtype, double default_lower, double default_upper);
RcppExport SEXP _prioritizr_rcpp_apply_decisions(SEXP xSEXP, SEXP vtypeSEXP, SEXP default_lowerSEXP, SEXP default_upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type vtype(vtypeSEXP);
    Rcpp::traits::input_parameter< double >::type default_lower(default_lowerSEXP);
    Rcpp::traits::input_parameter< double >::type default_upper(default_upperSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_decisions(x, vtype, default_lower, default_upper));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_feature_contiguity_constraints
bool rcpp_apply_feature_contiguity_constraints(SEXP x, const Rcpp::List data, const Rcpp::List clusters_list);
RcppExport SEXP _prioritizr_rcpp_apply_feature_contiguity_constraints(SEXP xSEXP, SEXP dataSEXP, SEXP clusters_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type clusters_list(clusters_listSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_feature_contiguity_constraints(x, data, clusters_list));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_feature_weights
bool rcpp_apply_feature_weights(SEXP x, const Rcpp::NumericVector weights);
RcppExport SEXP _prioritizr_rcpp_apply_feature_weights(SEXP xSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_feature_weights(x, weights));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_linear_penalties
bool rcpp_apply_linear_penalties(SEXP x, const Rcpp::NumericVector penalty, const arma::sp_mat data);
RcppExport SEXP _prioritizr_rcpp_apply_linear_penalties(SEXP xSEXP, SEXP penaltySEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_linear_penalties(x, penalty, data));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_locked_constraints
bool rcpp_apply_locked_constraints(SEXP x, const Rcpp::IntegerVector pu, const Rcpp::IntegerVector zone, const Rcpp::NumericVector status);
RcppExport SEXP _prioritizr_rcpp_apply_locked_constraints(SEXP xSEXP, SEXP puSEXP, SEXP zoneSEXP, SEXP statusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type pu(puSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type zone(zoneSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type status(statusSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_locked_constraints(x, pu, zone, status));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_max_cover_objective
bool rcpp_apply_max_cover_objective(SEXP x, const Rcpp::NumericMatrix costs, const Rcpp::NumericVector budget);
RcppExport SEXP _prioritizr_rcpp_apply_max_cover_objective(SEXP xSEXP, SEXP costsSEXP, SEXP budgetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type budget(budgetSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_max_cover_objective(x, costs, budget));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_max_features_objective
bool rcpp_apply_max_features_objective(SEXP x, const Rcpp::List targets_list, const Rcpp::NumericMatrix costs, const Rcpp::NumericVector budget);
RcppExport SEXP _prioritizr_rcpp_apply_max_features_objective(SEXP xSEXP, SEXP targets_listSEXP, SEXP costsSEXP, SEXP budgetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type targets_list(targets_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type budget(budgetSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_max_features_objective(x, targets_list, costs, budget));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_max_phylo_objective
bool rcpp_apply_max_phylo_objective(SEXP x, const Rcpp::List targets_list, const Rcpp::NumericMatrix costs, const Rcpp::NumericVector budget, const arma::sp_mat branch_matrix, const Rcpp::NumericVector branch_lengths);
RcppExport SEXP _prioritizr_rcpp_apply_max_phylo_objective(SEXP xSEXP, SEXP targets_listSEXP, SEXP costsSEXP, SEXP budgetSEXP, SEXP branch_matrixSEXP, SEXP branch_lengthsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type targets_list(targets_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type budget(budgetSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat >::type branch_matrix(branch_matrixSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type branch_lengths(branch_lengthsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_max_phylo_objective(x, targets_list, costs, budget, branch_matrix, branch_lengths));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_max_utility_objective
bool rcpp_apply_max_utility_objective(SEXP x, const Rcpp::NumericMatrix abundances, const Rcpp::NumericMatrix costs, const Rcpp::NumericVector budget);
RcppExport SEXP _prioritizr_rcpp_apply_max_utility_objective(SEXP xSEXP, SEXP abundancesSEXP, SEXP costsSEXP, SEXP budgetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type abundances(abundancesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type budget(budgetSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_max_utility_objective(x, abundances, costs, budget));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_min_largest_shortfall_objective
bool rcpp_apply_min_largest_shortfall_objective(SEXP x, const Rcpp::List targets_list, const Rcpp::NumericMatrix costs, const Rcpp::NumericVector budget);
RcppExport SEXP _prioritizr_rcpp_apply_min_largest_shortfall_objective(SEXP xSEXP, SEXP targets_listSEXP, SEXP costsSEXP, SEXP budgetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type targets_list(targets_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type budget(budgetSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_min_largest_shortfall_objective(x, targets_list, costs, budget));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_min_set_objective
bool rcpp_apply_min_set_objective(SEXP x, const Rcpp::List targets_list, const Rcpp::NumericMatrix costs);
RcppExport SEXP _prioritizr_rcpp_apply_min_set_objective(SEXP xSEXP, SEXP targets_listSEXP, SEXP costsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type targets_list(targets_listSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type costs(costsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_min_set_objective(x, targets_list, costs));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_min_shortfall_objective
bool rcpp_apply_min_shortfall_objective(SEXP x, const Rcpp::List targets_list, Rcpp::NumericMatrix costs, Rcpp::NumericVector budget);
RcppExport SEXP _prioritizr_rcpp_apply_min_shortfall_objective(SEXP xSEXP, SEXP targets_listSEXP, SEXP costsSEXP, SEXP budgetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type targets_list(targets_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type budget(budgetSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_min_shortfall_objective(x, targets_list, costs, budget));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_neighbor_constraints
bool rcpp_apply_neighbor_constraints(SEXP x, const Rcpp::List connected_data, const Rcpp::NumericMatrix k);
RcppExport SEXP _prioritizr_rcpp_apply_neighbor_constraints(SEXP xSEXP, SEXP connected_dataSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type connected_data(connected_dataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_neighbor_constraints(x, connected_data, k));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_asym_connectivity
double rcpp_asym_connectivity(const Rcpp::List data, const Rcpp::NumericMatrix solution);
RcppExport SEXP _prioritizr_rcpp_asym_connectivity(SEXP dataSEXP, SEXP solutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type solution(solutionSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_asym_connectivity(data, solution));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_boundary
double rcpp_boundary(Rcpp::NumericVector edge_factor, Rcpp::NumericMatrix zones_matrix, arma::sp_mat boundary_matrix, Rcpp::NumericVector exposed_boundary, Rcpp::NumericVector total_boundary, Rcpp::NumericMatrix solution);
RcppExport SEXP _prioritizr_rcpp_boundary(SEXP edge_factorSEXP, SEXP zones_matrixSEXP, SEXP boundary_matrixSEXP, SEXP exposed_boundarySEXP, SEXP total_boundarySEXP, SEXP solutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type edge_factor(edge_factorSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type zones_matrix(zones_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type boundary_matrix(boundary_matrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type exposed_boundary(exposed_boundarySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type total_boundary(total_boundarySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type solution(solutionSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_boundary(edge_factor, zones_matrix, boundary_matrix, exposed_boundary, total_boundary, solution));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_branch_matrix
arma::sp_mat rcpp_branch_matrix(Rcpp::List x);
RcppExport SEXP _prioritizr_rcpp_branch_matrix(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_branch_matrix(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_connectivity
double rcpp_connectivity(const Rcpp::List data, Rcpp::NumericMatrix solution);
RcppExport SEXP _prioritizr_rcpp_connectivity(SEXP dataSEXP, SEXP solutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type solution(solutionSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_connectivity(data, solution));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_ferrier_score
arma::sp_mat rcpp_ferrier_score(arma::sp_mat& rij, Rcpp::NumericVector& targets, double portfolio_size, arma::sp_mat& out);
RcppExport SEXP _prioritizr_rcpp_ferrier_score(SEXP rijSEXP, SEXP targetsSEXP, SEXP portfolio_sizeSEXP, SEXP outSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat& >::type rij(rijSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type targets(targetsSEXP);
    Rcpp::traits::input_parameter< double >::type portfolio_size(portfolio_sizeSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat& >::type out(outSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_ferrier_score(rij, targets, portfolio_size, out));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_forbid_solution
bool rcpp_forbid_solution(SEXP x, Rcpp::IntegerVector solution);
RcppExport SEXP _prioritizr_rcpp_forbid_solution(SEXP xSEXP, SEXP solutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type solution(solutionSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_forbid_solution(x, solution));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_list_to_matrix_indices
Rcpp::List rcpp_list_to_matrix_indices(Rcpp::List x, std::size_t n_preallocate);
RcppExport SEXP _prioritizr_rcpp_list_to_matrix_indices(SEXP xSEXP, SEXP n_preallocateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_preallocate(n_preallocateSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_list_to_matrix_indices(x, n_preallocate));
    return rcpp_result_gen;
END_RCPP
}
