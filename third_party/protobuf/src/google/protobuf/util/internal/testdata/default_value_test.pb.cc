// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/util/internal/testdata/default_value_test.proto

#include <google/protobuf/util/internal/testdata/default_value_test.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
namespace testing {
class DefaultValueTestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<DefaultValueTest>
      _instance;
} _DefaultValueTest_default_instance_;
}  // namespace testing
}  // namespace protobuf
}  // namespace google
namespace protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto {
static void InitDefaultsDefaultValueTest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::protobuf::testing::_DefaultValueTest_default_instance_;
    new (ptr) ::google::protobuf::testing::DefaultValueTest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::protobuf::testing::DefaultValueTest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_DefaultValueTest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsDefaultValueTest}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_DefaultValueTest.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::protobuf::testing::DefaultValueTest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::protobuf::testing::DefaultValueTest, double_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::protobuf::testing::DefaultValueTest, repeated_double_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::protobuf::testing::DefaultValueTest, float_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::protobuf::testing::DefaultValueTest, int64_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::protobuf::testing::DefaultValueTest, uint64_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::protobuf::testing::DefaultValueTest, int32_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::protobuf::testing::DefaultValueTest, uint32_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::protobuf::testing::DefaultValueTest, bool_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::protobuf::testing::DefaultValueTest, string_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::protobuf::testing::DefaultValueTest, bytes_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::protobuf::testing::DefaultValueTest, enum_value_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::protobuf::testing::DefaultValueTest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::protobuf::testing::_DefaultValueTest_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/protobuf/util/internal/testdata/default_value_test.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\?google/protobuf/util/internal/testdata"
      "/default_value_test.proto\022\027google.protob"
      "uf.testing\"\372\002\n\020DefaultValueTest\022\024\n\014doubl"
      "e_value\030\001 \001(\001\022\027\n\017repeated_double\030\002 \003(\001\022\023"
      "\n\013float_value\030\003 \001(\002\022\023\n\013int64_value\030\005 \001(\003"
      "\022\024\n\014uint64_value\030\007 \001(\004\022\023\n\013int32_value\030\t "
      "\001(\005\022\024\n\014uint32_value\030\013 \001(\r\022\022\n\nbool_value\030"
      "\r \001(\010\022\024\n\014string_value\030\017 \001(\t\022\027\n\013bytes_val"
      "ue\030\021 \001(\014B\002\010\001\022I\n\nenum_value\030\022 \001(\01625.googl"
      "e.protobuf.testing.DefaultValueTest.Enum"
      "Default\">\n\013EnumDefault\022\016\n\nENUM_FIRST\020\000\022\017"
      "\n\013ENUM_SECOND\020\001\022\016\n\nENUM_THIRD\020\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 479);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/util/internal/testdata/default_value_test.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto
namespace google {
namespace protobuf {
namespace testing {
const ::google::protobuf::EnumDescriptor* DefaultValueTest_EnumDefault_descriptor() {
  protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto::file_level_enum_descriptors[0];
}
bool DefaultValueTest_EnumDefault_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const DefaultValueTest_EnumDefault DefaultValueTest::ENUM_FIRST;
const DefaultValueTest_EnumDefault DefaultValueTest::ENUM_SECOND;
const DefaultValueTest_EnumDefault DefaultValueTest::ENUM_THIRD;
const DefaultValueTest_EnumDefault DefaultValueTest::EnumDefault_MIN;
const DefaultValueTest_EnumDefault DefaultValueTest::EnumDefault_MAX;
const int DefaultValueTest::EnumDefault_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void DefaultValueTest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DefaultValueTest::kDoubleValueFieldNumber;
const int DefaultValueTest::kRepeatedDoubleFieldNumber;
const int DefaultValueTest::kFloatValueFieldNumber;
const int DefaultValueTest::kInt64ValueFieldNumber;
const int DefaultValueTest::kUint64ValueFieldNumber;
const int DefaultValueTest::kInt32ValueFieldNumber;
const int DefaultValueTest::kUint32ValueFieldNumber;
const int DefaultValueTest::kBoolValueFieldNumber;
const int DefaultValueTest::kStringValueFieldNumber;
const int DefaultValueTest::kBytesValueFieldNumber;
const int DefaultValueTest::kEnumValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DefaultValueTest::DefaultValueTest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto::scc_info_DefaultValueTest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.testing.DefaultValueTest)
}
DefaultValueTest::DefaultValueTest(const DefaultValueTest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      repeated_double_(from.repeated_double_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.string_value().size() > 0) {
    string_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.string_value_);
  }
  bytes_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.bytes_value().size() > 0) {
    bytes_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.bytes_value_);
  }
  ::memcpy(&double_value_, &from.double_value_,
    static_cast<size_t>(reinterpret_cast<char*>(&enum_value_) -
    reinterpret_cast<char*>(&double_value_)) + sizeof(enum_value_));
  // @@protoc_insertion_point(copy_constructor:google.protobuf.testing.DefaultValueTest)
}

void DefaultValueTest::SharedCtor() {
  string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bytes_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&double_value_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&enum_value_) -
      reinterpret_cast<char*>(&double_value_)) + sizeof(enum_value_));
}

DefaultValueTest::~DefaultValueTest() {
  // @@protoc_insertion_point(destructor:google.protobuf.testing.DefaultValueTest)
  SharedDtor();
}

void DefaultValueTest::SharedDtor() {
  string_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bytes_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void DefaultValueTest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* DefaultValueTest::descriptor() {
  ::protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const DefaultValueTest& DefaultValueTest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto::scc_info_DefaultValueTest.base);
  return *internal_default_instance();
}


void DefaultValueTest::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.testing.DefaultValueTest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  repeated_double_.Clear();
  string_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bytes_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&double_value_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&enum_value_) -
      reinterpret_cast<char*>(&double_value_)) + sizeof(enum_value_));
  _internal_metadata_.Clear();
}

bool DefaultValueTest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.testing.DefaultValueTest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double double_value = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &double_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated double repeated_double = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_repeated_double())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 18u, input, this->mutable_repeated_double())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float float_value = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &float_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 int64_value = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &int64_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 uint64_value = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &uint64_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 int32_value = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &int32_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 uint32_value = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &uint32_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bool_value = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bool_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string string_value = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_string_value()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->string_value().data(), static_cast<int>(this->string_value().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.testing.DefaultValueTest.string_value"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes bytes_value = 17 [ctype = CORD];
      case 17: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(138u /* 138 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_bytes_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.testing.DefaultValueTest.EnumDefault enum_value = 18;
      case 18: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(144u /* 144 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_enum_value(static_cast< ::google::protobuf::testing::DefaultValueTest_EnumDefault >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.testing.DefaultValueTest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.testing.DefaultValueTest)
  return false;
#undef DO_
}

void DefaultValueTest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.testing.DefaultValueTest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double double_value = 1;
  if (this->double_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->double_value(), output);
  }

  // repeated double repeated_double = 2;
  if (this->repeated_double_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _repeated_double_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteDoubleArray(
      this->repeated_double().data(), this->repeated_double_size(), output);
  }

  // float float_value = 3;
  if (this->float_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->float_value(), output);
  }

  // int64 int64_value = 5;
  if (this->int64_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->int64_value(), output);
  }

  // uint64 uint64_value = 7;
  if (this->uint64_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(7, this->uint64_value(), output);
  }

  // int32 int32_value = 9;
  if (this->int32_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->int32_value(), output);
  }

  // uint32 uint32_value = 11;
  if (this->uint32_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->uint32_value(), output);
  }

  // bool bool_value = 13;
  if (this->bool_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(13, this->bool_value(), output);
  }

  // string string_value = 15;
  if (this->string_value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->string_value().data(), static_cast<int>(this->string_value().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.testing.DefaultValueTest.string_value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      15, this->string_value(), output);
  }

  // bytes bytes_value = 17 [ctype = CORD];
  if (this->bytes_value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      17, this->bytes_value(), output);
  }

  // .google.protobuf.testing.DefaultValueTest.EnumDefault enum_value = 18;
  if (this->enum_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      18, this->enum_value(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.testing.DefaultValueTest)
}

::google::protobuf::uint8* DefaultValueTest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.testing.DefaultValueTest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double double_value = 1;
  if (this->double_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->double_value(), target);
  }

  // repeated double repeated_double = 2;
  if (this->repeated_double_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _repeated_double_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteDoubleNoTagToArray(this->repeated_double_, target);
  }

  // float float_value = 3;
  if (this->float_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->float_value(), target);
  }

  // int64 int64_value = 5;
  if (this->int64_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->int64_value(), target);
  }

  // uint64 uint64_value = 7;
  if (this->uint64_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(7, this->uint64_value(), target);
  }

  // int32 int32_value = 9;
  if (this->int32_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->int32_value(), target);
  }

  // uint32 uint32_value = 11;
  if (this->uint32_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->uint32_value(), target);
  }

  // bool bool_value = 13;
  if (this->bool_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(13, this->bool_value(), target);
  }

  // string string_value = 15;
  if (this->string_value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->string_value().data(), static_cast<int>(this->string_value().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.testing.DefaultValueTest.string_value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        15, this->string_value(), target);
  }

  // bytes bytes_value = 17 [ctype = CORD];
  if (this->bytes_value().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        17, this->bytes_value(), target);
  }

  // .google.protobuf.testing.DefaultValueTest.EnumDefault enum_value = 18;
  if (this->enum_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      18, this->enum_value(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.testing.DefaultValueTest)
  return target;
}

size_t DefaultValueTest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.testing.DefaultValueTest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated double repeated_double = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->repeated_double_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _repeated_double_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // string string_value = 15;
  if (this->string_value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->string_value());
  }

  // bytes bytes_value = 17 [ctype = CORD];
  if (this->bytes_value().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->bytes_value());
  }

  // double double_value = 1;
  if (this->double_value() != 0) {
    total_size += 1 + 8;
  }

  // int64 int64_value = 5;
  if (this->int64_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->int64_value());
  }

  // float float_value = 3;
  if (this->float_value() != 0) {
    total_size += 1 + 4;
  }

  // int32 int32_value = 9;
  if (this->int32_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->int32_value());
  }

  // uint64 uint64_value = 7;
  if (this->uint64_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->uint64_value());
  }

  // uint32 uint32_value = 11;
  if (this->uint32_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->uint32_value());
  }

  // bool bool_value = 13;
  if (this->bool_value() != 0) {
    total_size += 1 + 1;
  }

  // .google.protobuf.testing.DefaultValueTest.EnumDefault enum_value = 18;
  if (this->enum_value() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->enum_value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DefaultValueTest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.testing.DefaultValueTest)
  GOOGLE_DCHECK_NE(&from, this);
  const DefaultValueTest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const DefaultValueTest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.testing.DefaultValueTest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.testing.DefaultValueTest)
    MergeFrom(*source);
  }
}

void DefaultValueTest::MergeFrom(const DefaultValueTest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.testing.DefaultValueTest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  repeated_double_.MergeFrom(from.repeated_double_);
  if (from.string_value().size() > 0) {

    string_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.string_value_);
  }
  if (from.bytes_value().size() > 0) {

    bytes_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.bytes_value_);
  }
  if (from.double_value() != 0) {
    set_double_value(from.double_value());
  }
  if (from.int64_value() != 0) {
    set_int64_value(from.int64_value());
  }
  if (from.float_value() != 0) {
    set_float_value(from.float_value());
  }
  if (from.int32_value() != 0) {
    set_int32_value(from.int32_value());
  }
  if (from.uint64_value() != 0) {
    set_uint64_value(from.uint64_value());
  }
  if (from.uint32_value() != 0) {
    set_uint32_value(from.uint32_value());
  }
  if (from.bool_value() != 0) {
    set_bool_value(from.bool_value());
  }
  if (from.enum_value() != 0) {
    set_enum_value(from.enum_value());
  }
}

void DefaultValueTest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.testing.DefaultValueTest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DefaultValueTest::CopyFrom(const DefaultValueTest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.testing.DefaultValueTest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DefaultValueTest::IsInitialized() const {
  return true;
}

void DefaultValueTest::Swap(DefaultValueTest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DefaultValueTest::InternalSwap(DefaultValueTest* other) {
  using std::swap;
  repeated_double_.InternalSwap(&other->repeated_double_);
  string_value_.Swap(&other->string_value_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  bytes_value_.Swap(&other->bytes_value_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(double_value_, other->double_value_);
  swap(int64_value_, other->int64_value_);
  swap(float_value_, other->float_value_);
  swap(int32_value_, other->int32_value_);
  swap(uint64_value_, other->uint64_value_);
  swap(uint32_value_, other->uint32_value_);
  swap(bool_value_, other->bool_value_);
  swap(enum_value_, other->enum_value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata DefaultValueTest::GetMetadata() const {
  protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace testing
}  // namespace protobuf
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::protobuf::testing::DefaultValueTest* Arena::CreateMaybeMessage< ::google::protobuf::testing::DefaultValueTest >(Arena* arena) {
  return Arena::CreateInternal< ::google::protobuf::testing::DefaultValueTest >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
