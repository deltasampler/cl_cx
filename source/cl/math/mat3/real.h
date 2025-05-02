// special
num_t mat3_det(const mat3_t& m);
num_t mat3_frob(const mat3_t& m);

void mat3_transp(mat3_t& out, const mat3_t& m);
mat3_t mat3n_transp(const mat3_t& m);
void mat3m_transp(mat3_t& out);

void mat3_adjoint(mat3_t& out, const mat3_t& m);
mat3_t mat3n_adjoint(const mat3_t& m);
void mat3m_adjoint(mat3_t& out);

void mat3_inv(mat3_t& out, const mat3_t& m);
mat3_t mat3n_inv(const mat3_t& m);
void mat3m_inv(mat3_t& out);

// affine
void mat3_translation(mat3_t& out, const vec2_t& v);
mat3_t mat3n_translation(const vec2_t& v);

void mat3_rotation(mat3_t& out, num_t r);
mat3_t mat3n_rotation(num_t r);

void mat3_scaling(mat3_t& out, const vec2_t& v);
mat3_t mat3n_scaling(const vec2_t& v);

void mat3_translate(mat3_t& out, const mat3_t& m, const vec2_t& v);
mat3_t mat3n_translate(const mat3_t& m, const vec2_t& v);
void mat3m_translate(mat3_t& out, const vec2_t& v);

void mat3_rotate(mat3_t& out, const mat3_t& m, num_t r);
mat3_t mat3n_rotate(const mat3_t& m, num_t r);
void mat3m_rotate(mat3_t& out, num_t r);

void mat3_scale(mat3_t& out, const mat3_t& m, const vec2_t& v);
mat3_t mat3n_scale(const mat3_t& m, const vec2_t& v);
void mat3m_scale(mat3_t& out, const vec2_t& v);

// comparison
bool mat3_equals(const mat3_t& v0, const mat3_t& v1, num_t e = num_t(0.000001));
