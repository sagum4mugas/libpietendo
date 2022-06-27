#pragma once
#include <nn/hac/define/cnmt.h>

namespace nn
{
namespace hac
{
	class DeltaMetaExtendedHeader
	{
	public:
		DeltaMetaExtendedHeader();
		DeltaMetaExtendedHeader(const DeltaMetaExtendedHeader& other);

		void operator=(const DeltaMetaExtendedHeader& other);
		bool operator==(const DeltaMetaExtendedHeader& other) const;
		bool operator!=(const DeltaMetaExtendedHeader& other) const;

		// IByteModel
		void toBytes();
		void fromBytes(const byte_t* bytes, size_t len);
		const tc::ByteData& getBytes() const;

		// variables
		void clear();

		uint64_t getApplicationId() const;
		void setApplicationId(uint64_t application_id);

		uint32_t getExtendedDataSize() const;
		void setExtendedDataSize(uint32_t size);

	private:
		const std::string kModuleName = "DELTA_META_EXTENDED_HEADER";

		// binary blob
		tc::ByteData mRawBinary;

		// variables
		uint64_t mApplicationId;
		uint32_t mExtendedDataSize;
	};
}
}