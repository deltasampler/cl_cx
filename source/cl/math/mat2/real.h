// special
num_t mat2_det(const mat2_t& m);
num_t mat2_frob(const mat2_t& m);

void mat2_transp(mat2_t& out, const mat2_t& m);
mat2_t mat2n_transp(const mat2_t& m);
void mat2m_transp(mat2_t& out);

void mat2_adjoint(mat2_t& out, const mat2_t& m);
mat2_t mat2n_adjoint(const mat2_t& m);
void mat2m_adjoint(mat2_t& out);

void mat2_inv(mat2_t& out, const mat2_t& m);
mat2_t mat2n_inv(const mat2_t& m);
void mat2m_inv(mat2_t& out);

// affine
void mat2_rotation(mat2_t& out, num_t r);
mat2_t mat2n_rotation(num_t r);

void mat2_scaling(mat2_t& out, const vec2_t& v);
mat2_t mat2n_scaling(const vec2_t& v);

void mat2_rotate(mat2_t& out, const mat2_t& m, num_t r);
mat2_t mat2n_rotate(const mat2_t& m, num_t r);
void mat2m_rotate(mat2_t& out, num_t r);

void mat2_scale(mat2_t& out, const mat2_t& m, const vec2_t& v);
mat2_t mat2n_scale(const mat2_t& m, const vec2_t& v);
void mat2m_scale(mat2_t& out, const vec2_t& v);

// comparison
bool mat2_equals(const mat2_t& v0, const mat2_t& v1, num_t e = num_t(0.000001));
