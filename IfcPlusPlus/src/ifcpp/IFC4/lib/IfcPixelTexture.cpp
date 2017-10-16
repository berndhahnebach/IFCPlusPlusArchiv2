/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBinary.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcCartesianTransformationOperator2D.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcInteger.h"
#include "ifcpp/IFC4/include/IfcPixelTexture.h"
#include "ifcpp/IFC4/include/IfcSurfaceStyleWithTextures.h"
#include "ifcpp/IFC4/include/IfcTextureCoordinate.h"

// ENTITY IfcPixelTexture 
IfcPixelTexture::IfcPixelTexture() {}
IfcPixelTexture::IfcPixelTexture( int id ) { m_id = id; }
IfcPixelTexture::~IfcPixelTexture() {}
shared_ptr<IfcPPObject> IfcPixelTexture::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPixelTexture> copy_self( new IfcPixelTexture() );
	if( m_RepeatS ) { copy_self->m_RepeatS = dynamic_pointer_cast<IfcBoolean>( m_RepeatS->getDeepCopy(options) ); }
	if( m_RepeatT ) { copy_self->m_RepeatT = dynamic_pointer_cast<IfcBoolean>( m_RepeatT->getDeepCopy(options) ); }
	if( m_Mode ) { copy_self->m_Mode = dynamic_pointer_cast<IfcIdentifier>( m_Mode->getDeepCopy(options) ); }
	if( m_TextureTransform ) { copy_self->m_TextureTransform = dynamic_pointer_cast<IfcCartesianTransformationOperator2D>( m_TextureTransform->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Parameter.size(); ++ii )
	{
		auto item_ii = m_Parameter[ii];
		if( item_ii )
		{
			copy_self->m_Parameter.push_back( dynamic_pointer_cast<IfcIdentifier>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_Width ) { copy_self->m_Width = dynamic_pointer_cast<IfcInteger>( m_Width->getDeepCopy(options) ); }
	if( m_Height ) { copy_self->m_Height = dynamic_pointer_cast<IfcInteger>( m_Height->getDeepCopy(options) ); }
	if( m_ColourComponents ) { copy_self->m_ColourComponents = dynamic_pointer_cast<IfcInteger>( m_ColourComponents->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Pixel.size(); ++ii )
	{
		auto item_ii = m_Pixel[ii];
		if( item_ii )
		{
			copy_self->m_Pixel.push_back( dynamic_pointer_cast<IfcBinary>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcPixelTexture::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCPIXELTEXTURE" << "(";
	if( m_RepeatS ) { m_RepeatS->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_RepeatT ) { m_RepeatT->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Mode ) { m_Mode->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_TextureTransform ) { stream << "#" << m_TextureTransform->m_id; } else { stream << "*"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_Parameter.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcIdentifier>& type_object = m_Parameter[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, false );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	if( m_Width ) { m_Width->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Height ) { m_Height->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ColourComponents ) { m_ColourComponents->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_Pixel.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcBinary>& type_object = m_Pixel[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, false );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ");";
}
void IfcPixelTexture::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcPixelTexture::toString() const { return L"IfcPixelTexture"; }
void IfcPixelTexture::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPixelTexture, expecting 9, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_RepeatS = IfcBoolean::createObjectFromSTEP( args[0], map );
	m_RepeatT = IfcBoolean::createObjectFromSTEP( args[1], map );
	m_Mode = IfcIdentifier::createObjectFromSTEP( args[2], map );
	readEntityReference( args[3], m_TextureTransform, map );
	readTypeOfStringList( args[4], m_Parameter );
	m_Width = IfcInteger::createObjectFromSTEP( args[5], map );
	m_Height = IfcInteger::createObjectFromSTEP( args[6], map );
	m_ColourComponents = IfcInteger::createObjectFromSTEP( args[7], map );
	readTypeOfStringList( args[8], m_Pixel );
}
void IfcPixelTexture::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcSurfaceTexture::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Width", m_Width ) );
	vec_attributes.push_back( std::make_pair( "Height", m_Height ) );
	vec_attributes.push_back( std::make_pair( "ColourComponents", m_ColourComponents ) );
	if( m_Pixel.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> Pixel_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_Pixel.begin(), m_Pixel.end(), std::back_inserter( Pixel_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "Pixel", Pixel_vec_object ) );
	}
}
void IfcPixelTexture::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcSurfaceTexture::getAttributesInverse( vec_attributes_inverse );
}
void IfcPixelTexture::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcSurfaceTexture::setInverseCounterparts( ptr_self_entity );
}
void IfcPixelTexture::unlinkFromInverseCounterparts()
{
	IfcSurfaceTexture::unlinkFromInverseCounterparts();
}
