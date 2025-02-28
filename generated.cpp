// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "generated.h"

#include <kaitai/exceptions.h>

generated_t::generated_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, generated_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
}

void generated_t::_read() {
    m_magic = m__io->read_bytes(2);
    if (!(magic() == std::string("\x44\x89", 2))) {
        throw kaitai::validation_not_equal_error<std::string>(std::string("\x44\x89", 2), magic(), _io(), std::string("/seq/0"));
    }
    m_protocol = static_cast<generated_t::size_type_t>(m__io->read_u1());
    n_value4 = true;
    if (protocol() == generated_t::SIZE_TYPE_FLOAT) {
        n_value4 = false;
        m_value4 = m__io->read_f4be();
    }
    n_value8 = true;
    if (protocol() == generated_t::SIZE_TYPE_DOUBLE) {
        n_value8 = false;
        m_value8 = m__io->read_f8be();
    }
}

generated_t::~generated_t() {
    if (!n_value4) {
    }
    if (!n_value8) {
    }
}
