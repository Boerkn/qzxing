#include "EncodeValidator.h"
#include <zxing/qrcode/encoder/QRCode.h>
#include <zxing/qrcode/encoder/ByteMatrix.h>
#include <zxing/qrcode/encoder/Encoder.h>
#include "TestCase.h"
#include "zxing/qrcode/encoder/MatrixUtilTests.h"
#include "zxing/qrcode/encoder/MaskUtilTests.h"
#include "zxing/qrcode/encoder/BitArrayTests.h"
#include "zxing/qrcode/encoder/QRCodeTests.h"
#include "zxing/qrcode/encoder/EncoderTests.h"
#include "zxing/common/reedsolomon/ReedSolomonEncoderTests.h"

namespace zxing {
namespace tests{

EncodeValidator::EncodeValidator()
{

}

void EncodeValidator::execute()
{
    try{
        qrcode::tests::MatrixUtilTests t;
        t.execute();

        qrcode::tests::MaskUtilTests t1;
        t1.execute();

        qrcode::tests::BitArrayTests t2;
        t2.execute();

        qrcode::tests::QRCodeTests t3;
        t3.execute();

        ReedSolomonEncoderTests t4;
        t4.execute();

        qrcode::tests::EncoderTests t5;
        t5.execute();

    } catch(zxing::Exception &e) {
        qDebug() << "Exception: " <<  e.what();
    }
}

}
}
