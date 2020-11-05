// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dominect.proto

#include "dominect.pb.h"

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

namespace dom {
class GameParameterDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GameParameter>
      _instance;
} _GameParameter_default_instance_;
class GameTurnDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GameTurn>
      _instance;
} _GameTurn_default_instance_;
class GameStateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GameState>
      _instance;
} _GameState_default_instance_;
}  // namespace dom
namespace protobuf_dominect_2eproto {
static void InitDefaultsGameParameter() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::dom::_GameParameter_default_instance_;
    new (ptr) ::dom::GameParameter();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::dom::GameParameter::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_GameParameter =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGameParameter}, {}};

static void InitDefaultsGameTurn() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::dom::_GameTurn_default_instance_;
    new (ptr) ::dom::GameTurn();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::dom::GameTurn::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_GameTurn =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGameTurn}, {}};

static void InitDefaultsGameState() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::dom::_GameState_default_instance_;
    new (ptr) ::dom::GameState();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::dom::GameState::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_GameState =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGameState}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_GameParameter.base);
  ::google::protobuf::internal::InitSCC(&scc_info_GameTurn.base);
  ::google::protobuf::internal::InitSCC(&scc_info_GameState.base);
}

::google::protobuf::Metadata file_level_metadata[3];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dom::GameParameter, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dom::GameParameter, board_width_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dom::GameParameter, board_height_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dom::GameTurn, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dom::GameTurn, x1_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dom::GameTurn, y1_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dom::GameTurn, x2_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dom::GameTurn, y2_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dom::GameState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dom::GameState, board_width_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dom::GameState, board_height_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dom::GameState, board_data_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::dom::GameParameter)},
  { 7, -1, sizeof(::dom::GameTurn)},
  { 16, -1, sizeof(::dom::GameState)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::dom::_GameParameter_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::dom::_GameTurn_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::dom::_GameState_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "dominect.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\016dominect.proto\022\003dom\":\n\rGameParameter\022\023"
      "\n\013board_width\030\001 \001(\r\022\024\n\014board_height\030\002 \001("
      "\r\":\n\010GameTurn\022\n\n\002x1\030\001 \001(\r\022\n\n\002y1\030\002 \001(\r\022\n\n"
      "\002x2\030\003 \001(\r\022\n\n\002y2\030\004 \001(\r\"J\n\tGameState\022\023\n\013bo"
      "ard_width\030\001 \001(\r\022\024\n\014board_height\030\002 \001(\r\022\022\n"
      "\nboard_data\030\003 \001(\014b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 225);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dominect.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_dominect_2eproto
namespace dom {

// ===================================================================

void GameParameter::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GameParameter::kBoardWidthFieldNumber;
const int GameParameter::kBoardHeightFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GameParameter::GameParameter()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_dominect_2eproto::scc_info_GameParameter.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:dom.GameParameter)
}
GameParameter::GameParameter(const GameParameter& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&board_width_, &from.board_width_,
    static_cast<size_t>(reinterpret_cast<char*>(&board_height_) -
    reinterpret_cast<char*>(&board_width_)) + sizeof(board_height_));
  // @@protoc_insertion_point(copy_constructor:dom.GameParameter)
}

void GameParameter::SharedCtor() {
  ::memset(&board_width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&board_height_) -
      reinterpret_cast<char*>(&board_width_)) + sizeof(board_height_));
}

GameParameter::~GameParameter() {
  // @@protoc_insertion_point(destructor:dom.GameParameter)
  SharedDtor();
}

void GameParameter::SharedDtor() {
}

void GameParameter::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GameParameter::descriptor() {
  ::protobuf_dominect_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_dominect_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GameParameter& GameParameter::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_dominect_2eproto::scc_info_GameParameter.base);
  return *internal_default_instance();
}


void GameParameter::Clear() {
// @@protoc_insertion_point(message_clear_start:dom.GameParameter)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&board_width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&board_height_) -
      reinterpret_cast<char*>(&board_width_)) + sizeof(board_height_));
  _internal_metadata_.Clear();
}

bool GameParameter::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dom.GameParameter)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 board_width = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &board_width_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 board_height = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &board_height_)));
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
  // @@protoc_insertion_point(parse_success:dom.GameParameter)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dom.GameParameter)
  return false;
#undef DO_
}

void GameParameter::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dom.GameParameter)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 board_width = 1;
  if (this->board_width() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->board_width(), output);
  }

  // uint32 board_height = 2;
  if (this->board_height() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->board_height(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:dom.GameParameter)
}

::google::protobuf::uint8* GameParameter::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:dom.GameParameter)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 board_width = 1;
  if (this->board_width() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->board_width(), target);
  }

  // uint32 board_height = 2;
  if (this->board_height() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->board_height(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dom.GameParameter)
  return target;
}

size_t GameParameter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dom.GameParameter)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 board_width = 1;
  if (this->board_width() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->board_width());
  }

  // uint32 board_height = 2;
  if (this->board_height() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->board_height());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GameParameter::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dom.GameParameter)
  GOOGLE_DCHECK_NE(&from, this);
  const GameParameter* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GameParameter>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dom.GameParameter)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dom.GameParameter)
    MergeFrom(*source);
  }
}

void GameParameter::MergeFrom(const GameParameter& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dom.GameParameter)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.board_width() != 0) {
    set_board_width(from.board_width());
  }
  if (from.board_height() != 0) {
    set_board_height(from.board_height());
  }
}

void GameParameter::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dom.GameParameter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GameParameter::CopyFrom(const GameParameter& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dom.GameParameter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GameParameter::IsInitialized() const {
  return true;
}

void GameParameter::Swap(GameParameter* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GameParameter::InternalSwap(GameParameter* other) {
  using std::swap;
  swap(board_width_, other->board_width_);
  swap(board_height_, other->board_height_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GameParameter::GetMetadata() const {
  protobuf_dominect_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_dominect_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void GameTurn::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GameTurn::kX1FieldNumber;
const int GameTurn::kY1FieldNumber;
const int GameTurn::kX2FieldNumber;
const int GameTurn::kY2FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GameTurn::GameTurn()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_dominect_2eproto::scc_info_GameTurn.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:dom.GameTurn)
}
GameTurn::GameTurn(const GameTurn& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x1_, &from.x1_,
    static_cast<size_t>(reinterpret_cast<char*>(&y2_) -
    reinterpret_cast<char*>(&x1_)) + sizeof(y2_));
  // @@protoc_insertion_point(copy_constructor:dom.GameTurn)
}

void GameTurn::SharedCtor() {
  ::memset(&x1_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y2_) -
      reinterpret_cast<char*>(&x1_)) + sizeof(y2_));
}

GameTurn::~GameTurn() {
  // @@protoc_insertion_point(destructor:dom.GameTurn)
  SharedDtor();
}

void GameTurn::SharedDtor() {
}

void GameTurn::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GameTurn::descriptor() {
  ::protobuf_dominect_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_dominect_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GameTurn& GameTurn::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_dominect_2eproto::scc_info_GameTurn.base);
  return *internal_default_instance();
}


void GameTurn::Clear() {
// @@protoc_insertion_point(message_clear_start:dom.GameTurn)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x1_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y2_) -
      reinterpret_cast<char*>(&x1_)) + sizeof(y2_));
  _internal_metadata_.Clear();
}

bool GameTurn::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dom.GameTurn)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 x1 = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &x1_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 y1 = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &y1_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 x2 = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &x2_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 y2 = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &y2_)));
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
  // @@protoc_insertion_point(parse_success:dom.GameTurn)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dom.GameTurn)
  return false;
#undef DO_
}

void GameTurn::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dom.GameTurn)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 x1 = 1;
  if (this->x1() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->x1(), output);
  }

  // uint32 y1 = 2;
  if (this->y1() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->y1(), output);
  }

  // uint32 x2 = 3;
  if (this->x2() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->x2(), output);
  }

  // uint32 y2 = 4;
  if (this->y2() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->y2(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:dom.GameTurn)
}

::google::protobuf::uint8* GameTurn::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:dom.GameTurn)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 x1 = 1;
  if (this->x1() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->x1(), target);
  }

  // uint32 y1 = 2;
  if (this->y1() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->y1(), target);
  }

  // uint32 x2 = 3;
  if (this->x2() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->x2(), target);
  }

  // uint32 y2 = 4;
  if (this->y2() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->y2(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dom.GameTurn)
  return target;
}

size_t GameTurn::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dom.GameTurn)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 x1 = 1;
  if (this->x1() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->x1());
  }

  // uint32 y1 = 2;
  if (this->y1() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->y1());
  }

  // uint32 x2 = 3;
  if (this->x2() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->x2());
  }

  // uint32 y2 = 4;
  if (this->y2() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->y2());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GameTurn::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dom.GameTurn)
  GOOGLE_DCHECK_NE(&from, this);
  const GameTurn* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GameTurn>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dom.GameTurn)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dom.GameTurn)
    MergeFrom(*source);
  }
}

void GameTurn::MergeFrom(const GameTurn& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dom.GameTurn)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.x1() != 0) {
    set_x1(from.x1());
  }
  if (from.y1() != 0) {
    set_y1(from.y1());
  }
  if (from.x2() != 0) {
    set_x2(from.x2());
  }
  if (from.y2() != 0) {
    set_y2(from.y2());
  }
}

void GameTurn::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dom.GameTurn)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GameTurn::CopyFrom(const GameTurn& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dom.GameTurn)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GameTurn::IsInitialized() const {
  return true;
}

void GameTurn::Swap(GameTurn* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GameTurn::InternalSwap(GameTurn* other) {
  using std::swap;
  swap(x1_, other->x1_);
  swap(y1_, other->y1_);
  swap(x2_, other->x2_);
  swap(y2_, other->y2_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GameTurn::GetMetadata() const {
  protobuf_dominect_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_dominect_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void GameState::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GameState::kBoardWidthFieldNumber;
const int GameState::kBoardHeightFieldNumber;
const int GameState::kBoardDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GameState::GameState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_dominect_2eproto::scc_info_GameState.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:dom.GameState)
}
GameState::GameState(const GameState& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  board_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.board_data().size() > 0) {
    board_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.board_data_);
  }
  ::memcpy(&board_width_, &from.board_width_,
    static_cast<size_t>(reinterpret_cast<char*>(&board_height_) -
    reinterpret_cast<char*>(&board_width_)) + sizeof(board_height_));
  // @@protoc_insertion_point(copy_constructor:dom.GameState)
}

void GameState::SharedCtor() {
  board_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&board_width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&board_height_) -
      reinterpret_cast<char*>(&board_width_)) + sizeof(board_height_));
}

GameState::~GameState() {
  // @@protoc_insertion_point(destructor:dom.GameState)
  SharedDtor();
}

void GameState::SharedDtor() {
  board_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void GameState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GameState::descriptor() {
  ::protobuf_dominect_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_dominect_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GameState& GameState::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_dominect_2eproto::scc_info_GameState.base);
  return *internal_default_instance();
}


void GameState::Clear() {
// @@protoc_insertion_point(message_clear_start:dom.GameState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  board_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&board_width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&board_height_) -
      reinterpret_cast<char*>(&board_width_)) + sizeof(board_height_));
  _internal_metadata_.Clear();
}

bool GameState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dom.GameState)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 board_width = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &board_width_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 board_height = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &board_height_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes board_data = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_board_data()));
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
  // @@protoc_insertion_point(parse_success:dom.GameState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dom.GameState)
  return false;
#undef DO_
}

void GameState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dom.GameState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 board_width = 1;
  if (this->board_width() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->board_width(), output);
  }

  // uint32 board_height = 2;
  if (this->board_height() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->board_height(), output);
  }

  // bytes board_data = 3;
  if (this->board_data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->board_data(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:dom.GameState)
}

::google::protobuf::uint8* GameState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:dom.GameState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 board_width = 1;
  if (this->board_width() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->board_width(), target);
  }

  // uint32 board_height = 2;
  if (this->board_height() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->board_height(), target);
  }

  // bytes board_data = 3;
  if (this->board_data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->board_data(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dom.GameState)
  return target;
}

size_t GameState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dom.GameState)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes board_data = 3;
  if (this->board_data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->board_data());
  }

  // uint32 board_width = 1;
  if (this->board_width() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->board_width());
  }

  // uint32 board_height = 2;
  if (this->board_height() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->board_height());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GameState::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dom.GameState)
  GOOGLE_DCHECK_NE(&from, this);
  const GameState* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GameState>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dom.GameState)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dom.GameState)
    MergeFrom(*source);
  }
}

void GameState::MergeFrom(const GameState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dom.GameState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.board_data().size() > 0) {

    board_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.board_data_);
  }
  if (from.board_width() != 0) {
    set_board_width(from.board_width());
  }
  if (from.board_height() != 0) {
    set_board_height(from.board_height());
  }
}

void GameState::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dom.GameState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GameState::CopyFrom(const GameState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dom.GameState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GameState::IsInitialized() const {
  return true;
}

void GameState::Swap(GameState* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GameState::InternalSwap(GameState* other) {
  using std::swap;
  board_data_.Swap(&other->board_data_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(board_width_, other->board_width_);
  swap(board_height_, other->board_height_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GameState::GetMetadata() const {
  protobuf_dominect_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_dominect_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace dom
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::dom::GameParameter* Arena::CreateMaybeMessage< ::dom::GameParameter >(Arena* arena) {
  return Arena::CreateInternal< ::dom::GameParameter >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::dom::GameTurn* Arena::CreateMaybeMessage< ::dom::GameTurn >(Arena* arena) {
  return Arena::CreateInternal< ::dom::GameTurn >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::dom::GameState* Arena::CreateMaybeMessage< ::dom::GameState >(Arena* arena) {
  return Arena::CreateInternal< ::dom::GameState >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)